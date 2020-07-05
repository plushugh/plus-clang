#include <stdio.h>

int main(void)
{
    int i, no;
    float value;
    float sum = 0.0f;

    puts("multiple additions to float.");
    printf("value:");
    scanf("%f", &value);
    printf("times:");
    scanf("%d", &no);

    for (i = 0; i < no; i++)
        sum += value;
    printf("result of addition(s): %f\n", sum);

    return 0;
}