#include <stdio.h>

#define SIZE 5

int main()
{
    int i, j;
    int sum;

    int a[SIZE];
    int b[SIZE];

    int c[2][3] = {
        {11, 22, 33},
        {44, 55, 66},
    };

    for (i = 0; i < SIZE; i++)
    {
        a[i] = b[i];
    }

    for (i = 0; i < SIZE; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    for (i = 0; i < SIZE; i++)
    {
        printf("b[%d] = %d\n", i, b[i]);
    }

    sum = 0;
    for (i = 0; i < SIZE; i++)
    {
        sum += a[i];
    }
    printf("Sum of all the elements in array \"a\" = %d\n", sum);

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("c[%d][%d] = %d\n", i, j, c[i][j]);
        }
    }

    return 0;
}