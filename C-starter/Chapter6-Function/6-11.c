#include <stdio.h>

#define NUMBER 5

int max_of(int v[], int n)
{
    int i;
    int max = v[0];

    for ( i = 1; i < n; i++)
        if (v[i] > max)
            max = v[i];
    return max;
}

int main(void)
{
    int i;
    int eng[NUMBER];
    int mat[NUMBER];
    int max_e, max_m;

    printf("Enter the score of %d students. \n", NUMBER);
    for (i = 0; i < NUMBER; i++)
    {
        printf("[%d] English:", i + 1);  scanf("%d", &eng[i]);
        printf("        Math:");         scanf("%d", &mat[i]);
    }
    max_e = max_of(eng, NUMBER);
    max_m = max_of(mat, NUMBER);

    printf("The higest score of English is %d\n", max_e);
    printf("   The higest score of Math is %d\n", max_m);

    return 0;    
}