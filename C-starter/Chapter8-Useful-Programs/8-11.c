#include <stdio.h>

int main(void)
{
	int i;

	printf("EOF = %d\n", EOF);

	for (i = 0; i < 10; i++)
		printf("'%d' = %d\n", i, '0' + i);

	return 0;
}
