#include <stdio.h>

double power(double x, int n)
{
    int i;
    double tmp = 1.0;
    for (i = 1; i <= n; i++)
	    tmp *= x;
    return tmp;
}
int main(void)
{
    double a;
    int b;
    printf("Find the 'b'th power of a\n");
    printf("Enter a real number:");	scanf("%lf", &a);
    printf("Enter a integer:");		scanf("%d", &b);
    printf("The %d TH power of %.2f is %.2f. \n", b, a, power(a, b));

    return 0;
}
