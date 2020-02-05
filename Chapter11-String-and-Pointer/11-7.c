#include <stdio.h>

char *str_copy(char *d, const char *s)
{
    char *t = d;

    while (*d++ = *s++)
        ;
    return t;
    
}

int main(void)
{
    char *ptr = "1234";
    char tmp[128] ;

    printf("str = \"%s\"\n", ptr);

    printf("string to copy: ", tmp);
    scanf("%s", tmp);

    str_copy(ptr, tmp);

    puts("Copied!");
    printf("ptr = \"%s\"\n", ptr);

    return 0;
}