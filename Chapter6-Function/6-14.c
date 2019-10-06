#include <stdio.h>

#define NUMBER 5
#define FAILED -1

int search(int v[], int key, int n)
{
	int i = 0;

	v[n] = key;

	while (1) {
		if (v[i] == key)
		{
			break;
		}
		i++;
	}

	return (i < n) ? i : FAILED;
}

int main(void)
{
	int i, ky, idx;
	int vx[NUMBER + 1];

	for (int i = 0; i < NUMBER; i++)
	{
		printf("vx[%d]:", i);
		scanf("%d", &vx[i]);
	}
	printf("value to find:");
	scanf("%d", &ky);
	if ((idx = search(vx, ky, NUMBER)) ==FAILED)
		puts("\aERRRRRROOOOORRRRR!!!");
	else
		printf("%d is the %dth element of the str\n", ky, idx + 1);
	return 0;
}