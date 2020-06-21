#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf("The char type in this compiler is ");

    if (CHAR_MIN)
        puts("signed.");
    else
        puts("unsigned.");

    return 0;
}