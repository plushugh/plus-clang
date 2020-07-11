#include <stdio.h>

int main(void)
{
    int ch;
    FILE *sfp;
    FILE *dfp;
    char sname[FILENAME_MAX];
    char dname[FILENAME_MAX];

    printf("Open original file:");
    scanf("%s", sname);
    printf("  Open target file:");
    scanf("%s", dname);

    if (sfp = fopen(sname, "r") == NULL)
        printf("Error opening original file.\n");
    else
    {
        if (dfp = fopen(dname, "w") == NULL)
            printf("Error opening target file:");
        else
        {
            while ((ch = fgetc(sfp)) != EOF)
                fputc(ch, dfp);
            fclose(dfp);
        }
        fclose(sfp);
    }

    return 0;
}