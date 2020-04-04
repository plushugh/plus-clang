#include <stdio.h>

#define NAME_LEN	128

struct Date {
	int y;
	int m;
	int d;
};

typedef struct {
	char name[NAME_LEN];
	struct Date birthday;
} Human;

void print_Human(const Human *h)
{
	printf("%s (Birth date: Y:%04d M: %02d D: %02d) \n",
			h->name, h->birthday.y, h->birthday.m, h->birthday.d);
}

int main(void)
{
	int i;
	struct Date today;
	
	Human member[] = {
		{"a", {1904, 11, 18}},
		{"b", {1962, 11, 18}},
		{"c", {1980, 11, 18}},
	};
	printf("enter today's date:\n");
	printf(" Year:"); scanf("%d", &today.y);
	printf("Month:"); scanf("%d", &today.m);
	printf("  Day:"); scanf("%d", &today.d);
	
	printf("Today is %d-%d-%d(Y-M-D). \n", today.y, today.m, today.d);
	
	printf("-----Member-overview-----\n");
	for (i = 0; i < sizeof(member) / sizeof(member[0]); i++)
		print_Human(&member[i]);
	
	return 0;
}