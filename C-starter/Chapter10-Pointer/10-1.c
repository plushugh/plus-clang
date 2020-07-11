#include <stdio.h>

void sum_diff(int n1, int n2, int sum, int diff)
{
    sum = n1 + n2;
    diff = (n1 > n2) ? n1 - n2 : n2 - n1;
}

int main()
{
    int na, nb;
    int wa = 0, sa = 0;

    puts("________Enter two Integers________");
    printf("Integer a:");   scanf("%d", &na);
    printf("Integer b:");   scanf("%d", &sa);

    sum_diff(na, nb, wa, sa);

    printf("The sum of two numbers is %d, difference is %d. \n", wa, sa);

    return 0;
}
