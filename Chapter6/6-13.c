#include <stdio.h>

#define NUMBER 5
#define FAILED -1

int search(const int v[], int key, int n)
{
    int i = 0;

    while(1) {
        if (i == n)
            return FAILED;
        if (v[i] == key)
            return i;
        i++;
    }
}

int main(void)
{
    int i, ky, idx;
    int vx[NUMBER];

    for ( i = 0; i < NUMBER; i++)
    {
        printf("vx[%d]:", i);
        scanf("%d", &vx[i]);
    }
    printf("THE VALUE TO FIND:");
    scanf("%d", &ky);

    idx = search(vx, ky, NUMBER);

    if (idx == FAILED)
    {
        puts("\aSEARCH FAILED");
    }
    else
    {
        printf("%d is the number %dth number of the string\n", ky, idx + 1);
    }

    return 0;
}