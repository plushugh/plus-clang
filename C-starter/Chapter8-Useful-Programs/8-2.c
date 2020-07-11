#include <stdio.h>

#define sqr(x) ((x) * (x))

int main(void)
{
    int     n;
    double  x;

    printf("Enter an integer:");
    scanf("%d", &n);
    printf("The square of the number is %d.\n", sqr(n));

    printf("Enter an real number:");
    scanf("%1f", &x);
    printf("The square of the number is %f.\n", sqr(x));

    return 0;
}