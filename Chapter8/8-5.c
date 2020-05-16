#include <stdio.h>

#define NUMBER 5

void bsort(int a[], int n)
{
	int i, j;

	for (i = 0; i < n - 1; i++)
	{
		for (j = n - 1; j > i; j--)
		{
			if (a[j - 1] > a[j])
			{
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
}

int main(void)
{
	int i;
	int height[NUMBER];

	printf("Enter %d person's height\n", NUMBER);
	for (i = 0; i < NUMBER; i++)
	{
		printf("Number %2d:", i + 1);
		scanf("%d", &height[i]);
	}

	bsort(height, NUMBER);

	puts("Sort Acendingly");
	for (i = 0; i < NUMBER; i++)
		printf("Number%2d: %d\n", i + 1, height[i]);

	return 0;
}
