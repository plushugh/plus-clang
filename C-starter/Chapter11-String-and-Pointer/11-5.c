# include <stdio.h>

int str_length (const char *s)
{
    int len = 0;

    while (*s++)
        len++;
    return len;
}

int main(void)
{
    char str[128];

    printf("please enter a string:");
    scanf("%s", str);

    printf("the string \"%s\"'s length is %d.\n", str, str_length(str));

    return 0;
}