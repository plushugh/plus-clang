#include <stdio.h>

void writelines(char *lineptr[], int nlines)
{
    while (nlines-- > 0)
        printf("%s\n", *lineptr++);
}

int main()
{
    char *lines[] = {
        "First Line",
        "Second Line",
        "Third one",
        "Fourth",
    };
    writelines(lines, 4);
}