#include <stdio.h>

int main(void)
{
    int i;
    int a[5] = {1, 2, 3, 4, 5};
    int *p = a;

    for (i = 0; i < 5; i++)
        printf("&a[%d] = %p p+%d = %p\n", i, &a[i], i, p + i);
    return 0;
}