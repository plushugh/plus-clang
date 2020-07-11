#include <stdio.h>

int main(void)
{
	int no;

	do {
		printf("enter an positive integer: ");
		scanf("%d", &no);
		if (no <= 0)
			puts("\aplease do not enter an non-positive integer");
	} while (no <= 0);

	printf("The reverse of the integer: ");
	while (no > 0) {
		printf("%d", no % 10);
		no /= 10;
	}
	puts(".");

	return 0;
}
