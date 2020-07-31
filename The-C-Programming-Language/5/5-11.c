#include <stdio.h>
#include <string.h>

#define MAXLINES 5000

int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);
int numcmp(char *s1, char *s2);
void ptrqsort(void *lineptr[],
           int left,
           int right,
           int (*comp)(void *, void *));

char lineptr[MAXLINES];

int main(int argc, char const *argv[])
{
    int nlines;
    int numeric = 0;
    if (argc > 1 && strcmp(argv[1], "-n") == 0)
        numeric = 1;
    if ((nlines = readlines(lineptr, MAXLINES)) >= 0)
    {
        ptrqsort((void **)lineptr, 0, nlines - 1, (int (*)(void *, void *))(numeric ? numcmp : strcmp));
        writelines(lineptr, nlines);
        return 0;
    } else {
        printf("input too big to sort");
        return 1;
    }

    return 0;
}
