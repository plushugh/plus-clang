char *strcat(char *s1, const char *s2)
{
    char *tmp = s1;
    while (*s1)
        s1++;
    while (*s1++ = *s2++)
        ;
    return tmp;
}

char *strncat(char *s1, const char *s2, size_t n)
{
    char *tmp = s1;

    while (*s1)
        s1++;
    while (n--)
        if (!(*s1++ = *s2++)) break;
    *s1 = '\0';
}