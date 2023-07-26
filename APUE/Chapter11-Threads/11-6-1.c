#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>

struct foo
{
    int f_count;
    pthread_mutex_t f_lock;
    int f_id;
    /* ... more stuff here ... */
};

struct foo *foo_alloc(int id) /* allocate the object */
{
    struct foo *fp;

    printf("malloc\n");

    if ((fp = malloc(sizeof(struct foo))) != NULL)
    {
        fp->f_count = 1;
        fp->f_id = id;

        printf("init\n");

        if (pthread_mutex_init(&fp->f_lock, NULL) != 0)
        {
            free(fp);

            printf("free\n");

            return (NULL);
        }
        /* ... continue initialization ... */
    }
    return (fp);
}

void foo_hold(struct foo *fp) /* add a reference to the object */
{
    printf("hold\n");
    pthread_mutex_lock(&fp->f_lock);
    printf("lock\n");
    fp->f_count++;
    printf("count++\n");
    pthread_mutex_unlock(&fp->f_lock);
    printf("unlock\n");
}

void foo_rele(struct foo *fp) /* release a reference to the object */
{
    printf("rele\n");
    pthread_mutex_lock(&fp->f_lock);
    printf("lock\n");
    if (--fp->f_count == 0)
    { /* last reference */
        printf("free\n");
        pthread_mutex_unlock(&fp->f_lock);
        printf("unlock\n");
        pthread_mutex_destroy(&fp->f_lock);
        printf("destroy\n");
        free(fp);
        printf("free\n");
    }
    else
    {
        pthread_mutex_unlock(&fp->f_lock);
        printf("unlock\n");
    }
}

int main()
{
    printf("main\n");
    struct foo *fp = foo_alloc(1);
    printf("alloc\n");
    foo_hold(fp);
    printf("hold\n");
    foo_rele(fp);
    printf("rele\n");
}
