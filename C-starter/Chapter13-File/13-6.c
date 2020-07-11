#include <stdio.h>

int main(void)
{
    int ch;
    FILE *fp;
    char fname[FILENAME_MAX];

    printf("File Name:");
    scanf("%s", fname);

    if (fp = fopen(fname, "r") == NULL)
        printf("Could not open file %s\n", fname);
    else
    {
        while ((ch = fgetc(fp)) != EOF)
            putchar(ch);
        fclose(fp);
    }

    return 0;
}