#include <stdio.h>

int count_bits(unsigned x)
{
	int bits = 0;
	while (x)
	{
		if (x & 1U)
			bits++;
		x >>= 1;
	}
	return bits;
}

int int_bits(void)
{
	return count_bits(~0U);
}

void print_bits(unsigned x)
{
	int i;
	for (i = int_bits() - 1; i >= 0; i--)
		putchar(((x >> i) & 1U) ? '1' : '0');
}

int main(void)
{
	unsigned x, n;

	printf("non-negative integer:");
	scanf("%u", &x);
	printf("move x digits:");
	scanf("%u", &n);

	printf("\ninteger          = ");
	print_bits(x);
	printf("\nafter moved left = ");
	print_bits(x << n);
	printf("\nafter moved right= ");
	print_bits(x >> n);
	putchar('\n');

	return 0;
}
