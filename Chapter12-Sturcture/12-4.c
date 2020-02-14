#include <stdio.h>
#define NAME_LEN 64

struct student
{
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
};

void hiroko(struct student *std)
{
    if ((*std).height < 180) (*std).height = 180;
    if ((*std).weight >  80) (*std).weight = 80;
}

int main(void)
{
    struct student sanaka = {"Sanaka", 175, 62.5, 73000};

    hiroko(&sanaka);

    printf("Name:   %s\n", sanaka.name);
    printf("Height: %d\n", sanaka.height);
    printf("Weight: %.1f\n", sanaka.weight);
    printf("Schols: %1d\n", sanaka.schols);

    return 0;
}