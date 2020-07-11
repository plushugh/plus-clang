#include <stdio.h>

int factorial(int n)
{
	if (n > 0)
		return n * factorial(n - 1);
	else
		return 1;
}

int main(void)
{
	int num;

	printf("enter an integer");
	scanf("%d", &num);

	printf("factorial of interger is %d.\n", num, factorial(num));

	return 0;
}
