#include <stdio.h>

int max3(int a, int b, int c)
{
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}
int main(void)
{
    int a, b, c;
    puts("enter 3 integers:");
    printf("A:");    scanf("%d", &a);
    printf("B:");    scanf("%d", &b);
    printf("C:");    scanf("%d", &c);
    printf("The larger one is %d.\n", max3(a, b, c));
    return 0;
}
