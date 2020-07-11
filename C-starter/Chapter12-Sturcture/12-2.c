
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
	struct student sanaka;

	strcpy(sanaka.name, "Sanaka");
	sanaka.height = 175;
	sanaka.weight = 62.5;
	sanaka.schols = 73000;

	printf("name = %s\n",   sanaka.name);
	printf("height = %d\n", sanaka.height);
	printf("weight = %.1f\n", sanaka.weight);
	printf("schols = %1d\n", sanaka.schols);

	return 0;
}