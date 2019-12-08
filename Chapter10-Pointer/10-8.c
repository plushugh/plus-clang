//Wrong example
#include <stdio.h>

void swap(int *px, int *py)
{
    int temp = *px;
    *px = *py;
    *py = temp;
}

int main(void)
{
    double da, db;

    puts("Enter two real numbers:");
    printf("A:");   scanf("%1f", &da);
    printf("B:");   scanf("%1f", &db);

    swap(&da, &db);

    puts("Swapped the two numbers.");
    printf("integer A:%f\n",da);
    printf("integer B:%f\n",db);

    return 0;
}