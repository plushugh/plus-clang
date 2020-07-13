#include <stdio.h>

int main()
{
    long nc;

    nc = 0;
    while (getchat() != EOF)
        ++nc;
    printf("%ld\n", nc);
}