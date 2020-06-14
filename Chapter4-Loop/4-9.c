#include <stdio.h>

int main(void)
{
	int i = 0;
	int sum = 0;
	int num, tmp;

	printf("Enter how many integers");
	scanf("%d", &num);

	while (i < num) {
		printf("No.%d: ", ++i);
		scanf("%d", &tmp);
		sum += tmp;
	}

	printf("    Sum: %d\n", sum);
	printf("Average: %.2f\n", (double)sum / num);

	return 0;
}
