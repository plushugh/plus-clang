
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[128];

    printf("Enter a string:");
    scanf("%s", str);

    printf("The string converted to integer:%d\n", atoi(str));

    return 0;
}
