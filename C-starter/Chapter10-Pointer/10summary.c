#include <stdio.h>

#define NUMBER 5

void swap(int *px, int *py)
{
    int temp = *px;
    *px = *py;
    *py = temp;
}

void bsort(int a[], int n)
{
    int i, j;

    for (i = 0; i < n - 1; i++)
        for (j = n - 1; j > i; j--)
            if (a[j - 1] > a[j])
                swap(&a[j], &a[j - 1]);
}

int main(void)
{
    int i;
    int point[NUMBER];

    printf("Enter %d person's score: \n", NUMBER);
    for (i = 0; i < NUMBER; i++)
    {
        printf("number %2d: ", i + 1);
        scanf("%d", &point[i]);
    }

    bsort(point, NUMBER);

    puts("Sort acending");
    for (i = 0; i < NUMBER; i++)
        printf("Number %2d:%d\n", i + 1, point[i]);

    return 0;
}