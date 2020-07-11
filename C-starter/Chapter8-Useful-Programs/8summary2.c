#include <stdio.h>

#define alert() (putchar('\a'))

#define putchar_ln(c) (putchar(c), putchar('\n'))

int main(void)
{
	int ch;
	int sum = 0;

	while ((ch = getchar()) != EOF)
	{
		if (ch >= '0' && ch <= '9')
			sum += ch - '0';

		if (ch == '\n')
		{
			alert();
			putchar('\n');
		}
		else
		{
			putchar_ln(ch);
		}
	}

	printf("The sum of all numbers is %d.\n", sum);

	return 0;
}
