
#include <stdio.h>
#include <string.h>

#define NAME_LEN 64

struct student
{
	char name[NAME_LEN];
	int height;
	float weight;
	long schols;
};

int main(void)
{
	struct student takao = {"Takao", 173, 86.2};

	printf("name = %s\n", takao.name);
	printf("height = %d\n", takao.height);
	printf("weight = %.1f\n", takao.weight);
	printf("schols = %1d\n", takao.schols);

	return 0;
}