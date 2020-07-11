#include <stdio.h>
char *strcpy(char *sl, const char *s2)
{
    char *tmp = sl;

    while (*sl++ = *s2++);
        ;
    return tmp;
}

char *strncpy(char *sl, const char *s2, size_t n)
{
    char *tmp = sl;

    while (n) {
        if (!(*sl++ = *s2++)) break;
        n--;
    }
    while (n--)
        *sl++ = '\0';
    return tmp;
}
int main()
{
    char *test1 = "fkajsh";
    char test2[128];
    strncpy(test2, test1, 3);
     
    printf(test2);
    return 0;
}