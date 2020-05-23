#include <stdio.h>

int sqr_int(int x)
{
    return x * x;
}

double sqr_double(double x)
{
    return x * x;
}

int main(void)
{
    int     n;
    double  x;

    printf("Enter an integer:");
    scanf("%d", &n);
    printf("The square of the number is %d.\n", sqr_int(n));

    printf("Enter an real number:");
    scanf("%1f", &x);
    printf("The square of the number is %f.\n", sqr_double(x));

    return 0;
}