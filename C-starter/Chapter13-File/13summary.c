#include <stdio.h>

int main(void)
{
	int ch;
	FILE *fp;
	char fname[FILENAME_MAX];

	printf("File:");
	scanf("%s\n", fname);

	if ((fp = fopen(fname, "w")) == NULL)
		printf("\aFailed to open file\n");
	else
	{
		while ((ch = fgetc(stdin)) != EOF)
			fputc(ch, fp);
		fclose(fp);
	}

	return 0;
}
