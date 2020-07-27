#include <stdio.h>

int strl(char *s)
{
    int n;

    for (n = 0; *s != '\0';s++)
        n++;
    return n;
}
void strc(char *s, char *t)
{
    while(*s++ = *t++)
        ;
}
int strcm(char *s, char *t)
{
    for (; *s == *t; s++, t++)
        if(*s == '\0')
            return 0;
    return *s - *t;
}

int main()
{
    char str[20] = "ExampleString";
    char str2[20] = "asd";
    printf("%d\n", strl(str));
    for ( int i = 0; i < 10; i++)
    {
    printf("str2: %d\n",  strcm(str2, str) ); 
    strc(str2, str);

    printf("str2: %d\n",  strcm(str2, str) );
    }
}
