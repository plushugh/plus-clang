#include <stdio.h>

int main(void)
{
	int i, no;

	printf("Positive integer: ");
	scanf("%d", &no);

	for (i = 1; i <= no; i++)
		putchar('*');
	putchar('\n');

	return 0;
}
