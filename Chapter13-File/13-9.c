#include <stdio.h>

int main(void)
{
	FILE *fp;
	double pi = 3.14159265358979323846;

	printf("Pi from variable:%23.21f\n", pi);

	if ((fp = fopen("PI.bin", "wb")) == NULL)
		printf("\aFailed to open file\n");
	else {
		fwrite(&pi, sizeof(double), 1, fp);
		fclose(fp);
	}

	if ((fp = fopen("PI.bin", "rb")) == NULL)
		printf("\aFailed to open file\n");
	else {
		fread(&pi, sizeof(double), 1, fp);
		printf("Pi from file%23.21f\n", pi);
		fclose(fp);
	}

	return 0;
}
