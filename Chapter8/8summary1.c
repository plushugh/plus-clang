#include <stdio.h>

enum RGB
{
	Red,
	Green,
	Blue
};

int main(void)
{
	int color;

	printf("value from 0 to 2:");
	scanf("%d", &color);

	printf("You chose");
	switch (color)
	{
	case 0:
		printf("RED\n");
		break;
	case 1:
		printf("GREEN\n");
		break;
	case 2:
		printf("BLUE\n");
		break;
	}

	return 0;
}
