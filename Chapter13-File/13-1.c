#include <stdio.h>

int main(void)
{
	FILE *fp;
	
	fp = fopen("abc", "r");
	
	if (fp == NULL)
		printf("\aCannot open the file 'abc'.");
	else (
		printf("Successfully opened the file 'abc'.")
	
		fclose(fp);
	)
	return 0;
}