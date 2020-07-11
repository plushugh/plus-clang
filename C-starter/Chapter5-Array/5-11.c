#include <stdio.h>

#define NUMBER 5

int main(void)
{
    int i;
    int tensu[NUMBER];
    int max, min;

    printf("enter %d students' score.\n", NUMBER);
    for (i = 0; i < NUMBER; i++)
    {
        printf("Number %2d:", i + 1);
        scanf("%d", &tensu[i]);
    }

    min = max = tensu[0];

    for (i = 1; i < NUMBER; i++)
    {
        if (tensu[i] > max)
            max = tensu[i];
        if (tensu[i] < min)
            max = tensu[i];
    }

    printf("Highest score: %d\n", max);
    printf("Lowest score: %d\n", min);

    return 0;
}