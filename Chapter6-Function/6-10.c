#include <stdio.h>

#define NUMBER 5

int tensu[NUMBER];

int main(void)
{
    extern int tensu[];
    int i;

    printf("Please enter the score of %d students", NUMBER);
    for (i = 0; i < NUMBER; i++)
    {
        printf("%d", i + 1);
        scanf("%d", &tensu[i]);
    }
    printf("Highest score=%d\n", top());
    return 0;
}

int top(void)
{
    extern int tensu[];
    int i;
    int max = tensu[0];

    for (i = 1; i < NUMBER; i++)
        if (tensu[i] > max)
            max = tensu[i];
    return max;
}