#include <stdio.h>
int max2(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main(void)
{
    int n1, n2;
    puts("Enter Two Integer:");
    printf("First:");    scanf("%d", &n1);
    printf("Second:");    scanf("%d", &n2);
    printf("The larger one is %d. \n", max2(n1, n2));
    return 0;
}
