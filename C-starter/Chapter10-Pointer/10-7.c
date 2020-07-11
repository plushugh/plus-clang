#include <stdio.h>

void swap(int *px, int *py)
{
    int temp = *px;
    *px = *py;
    *py = temp;
}

void sort2(int *n1, *n2)
{
    if (n1 > n2)
        swap(n1, n2);
}

int main(void)
{
    int na, nb;

    puts("enter two integers:");
    printf("A:");   scanf("%d", &na);
    printf("B:");   scanf("%d", &nb);

    sort2(&na, &nb);

    puts("sorted the two integers in ascending order");
    printf("integer A:%d\n",na);
    printf("integer B:%d\n",nb);

    return 0;
}