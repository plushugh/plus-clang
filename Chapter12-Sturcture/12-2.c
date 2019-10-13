
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

int main()
{
	struct student sanaka;

	strcpy(sanaka.name, "Sanaka");
	sanaka.height = 175;
	sanaka.weight = 62.5;
	sanaka.schols = 73000;

	printf("name = %s\n",   sanaka.name);
	printf("height = %s\n", sanaka.height);
	printf("weight = %s\n", sanaka.weight);
	printf("schols = %s\n", sanaka.schols);

	return 0;
}