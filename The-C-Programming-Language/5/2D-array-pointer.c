#include <stdio.h>
#include <stdlib.h>

char *month_name(int n)
{
    static char *name[] = {
        "",
        "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    return (n < 1 || n > 12) ? "" : name[n];
}

int main()
{
    int c;
    while ((c = getchar() - '0') != EOF || c != '\0' )
        printf("%s\n", month_name(c));

    return 0;
}