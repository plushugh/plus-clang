/*Wrong example*/

#include <stdio.h>

#define puts_alert(str) \
	{                   \
		putchar('\a');  \
		puts(str);      \
	}

int main(void)
{
	int n;

	printf("Enter an integer");
	scanf("%d", &n);

	if (n)
		puts_alert("This number is not 0");
	else
		puts_alert("This number is 0");

	return 0;
}
