#include <stdio.h>

int main(void)
{
    FILE *fp;

    double pi = 3.14159265358979323856;

    printf("The pi from variable pi is %23.21f.\n", pi);

    if ((fp = fopen("PI.txt", "w")) == NULL)
        printf("\aFailed to open file\n");
    else
    {
        fprintf(fp, "%f", pi);
        fclose(fp);
    }

    if ((fp = fopen("PI.txt", "r")) == NULL)
        printf("\aFailed to open file\n");
    else
    {
        fscanf(fp, "%1f", &pi);
        printf("Pi read from file is %23.21f.\n", pi);
        fclose(fp);
    }

    return 0;
}