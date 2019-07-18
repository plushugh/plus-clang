#include <stdio.h>

double power(double x, int n)
{
    double tmp = 1.0;
    
    while (n-- > 0)
        tmp *= x;
    return tmp;
}

int main(void)
{
    double a;
    int b;

    printf("Find the 'b' TH power of a. \n");
    printf("real number a:");	scanf("%lf", &a);
    printf("integer:");		scanf("%d", &b);

    printf("The %dth power of %.2f is %.2f. \n", b, a, power(a, b));

    return 0;
}
