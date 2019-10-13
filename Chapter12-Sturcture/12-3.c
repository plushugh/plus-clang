
#include <stdio.h>
#include <string.h>

#define NAME_LEN 64

struct student
{
	char  name[NAME_LEN];
	int   height;
	float weight;
	long  schols;
};

int main(void)
{
	struct student takao = {"Takao", 173, 86.2};

	printf("name = %s\n",   sanaka.name);
	printf("height = %d\n", sanaka.height);
	printf("weight = %.1f\n", sanaka.weight);
	printf("schols = %1d\n", sanaka.schols);

	return 0;
}