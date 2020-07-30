#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

int main(int argc, char *argv[])
{
    char *lin = NULL;
    int found = 0;
    size_t *linemax = MAXLINE;

    if (argc != 2)
        printf("Usage: find pattern\n");
    else
        while(getline(&lin, &linemax, stdin) > 0)
            if (strstr(&lin, argv[1]) != NULL)
            {
                printf("%s", &lin);
                found++;
            }
    return found;
}