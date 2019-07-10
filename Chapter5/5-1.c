#include <stdio.h>

int main(void)
{
    int person1;
    int person2;
    int person3;
    int person4;
    int person5;
    int sum = 0;
    printf("Enter The Score Of the Five Students \n");
    printf("First:"); scanf("%d", &person1); sum += person1;
    printf("Second:"); scanf("%d", &person2); sum += person2;
    printf("Third:"); scanf("%d", &person3); sum += person3;
    printf("Fourth:"); scanf("%d", &person4); sum += person4;
    printf("Fifth:"); scanf("%d", &person5); sum += person5;

    printf("Total: %5d\n", sum);
    printf("Mean(Average): %5.1f\n", (double)sum / 5);

    return 0;
}
