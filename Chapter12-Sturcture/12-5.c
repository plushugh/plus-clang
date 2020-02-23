#include <stdio.h>

#define NAME_LEN	64

typedef struct student {
	char  name[NAME_LEN];
	int   height;
	float weight;
	long  schols;
} Student;

void hiroko(Student *std)
{
	if (std->height < 180) std->height = 180;
	if (std->weight >  80) std->weight =  80;
}

int main(void)
{
	Student sanaka = {"Sanaka", 175, 62.5, 73000};

	hiroko(&sanaka);

	printf("name = %s\n",   sanaka.name);
	printf("height = %d\n",   sanaka.height);
	printf("weight = %.1f\n", sanaka.weight);
	printf("schols = %ld\n",  sanaka.schols);

	return 0;
}
