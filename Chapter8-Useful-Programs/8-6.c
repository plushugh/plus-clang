

#include <stdio.h>

enum animal
{
	Dog,
	Cat,
	Monkey,
	Invalid
};

void dog(void)
{
	puts("DOG!");
}

void cat(void)
{
	puts("CAT!");
}

void monkey(void)
{
	puts("MONKEY!");
}

enum animal select(void)
{
	int tmp;

	do
	{
		printf("0<==>DOG  1<==>CAT  2<==>MONKEY   3<==>END");
		scanf("%d", &tmp);
	} while (tmp < Dog || tmp > Invalid);
	return tmp;
}

int main(void)
{
	enum animal selected;

	do
	{
		switch (selected = select())
		{
		case Dog:
			dog();
			break;
		case Cat:
			cat();
			break;
		case Monkey:
			monkey();
			break;
		}
	} while (selected != Invalid);

	return 0;
}