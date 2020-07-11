#include <stdio.h>

int scan_pint(void)
{
    int tmp;
    
    do {
        printf("Enter a positive integer:");
        scanf("%d", &tmp);
        if (tmp <= 0)
            puts("\a Please do not enter a non-positive integer, please enter it again.");
    } while (tmp <= 0);
    return tmp;
}
int rev_int(int num)
{
    int tmp = 0;
    if (num > 0) {
        do {
            tmp = tmp * 10 + num % 10;
            num /= 10;
        } while (num > 0);
    }
    return tmp;
}
int main(void)
{
    int nx = scan_pint();
    printf("The reverse form of the integer is %d. \n", rev_int(nx));
    return 0;
}
