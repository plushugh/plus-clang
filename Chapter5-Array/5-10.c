#include <stdio.h>

#define NUMBER 5

int main(void)
{
    int i;
    int tensu[NUMBER];
    int sum = 0;

    printf("enter %d student's score.\n", NUMBER);
    for (i = 0; i < NUMBER; i++)
    {
        printf("Number %2d:", i + 1);
        scanf("%d", &tensu[i]);
        sum += tensu[i];
    }
    printf("total: %5d\n", sum);
    printf("Average: %5.1f\n", (double)sum / NUMBER);

    return 0;
}