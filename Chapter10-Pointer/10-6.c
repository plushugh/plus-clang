#include <stdio.h>

void swap(int *px, int *py)
{
    int temp = *px;
    *px = *py;
    *py = temp;
}

int main(void)
{
    int na, nb;

    puts("enter two integers:");
    printf("A:");   scanf("%d", &na);
    printf("B:");   scanf("%d", &nb);

    swap(&na, &nb);

    puts("swapped the two integers");
    printf("integer A:%d\n",na);
    printf("integer B:%d\n",nb);

    return 0;
}