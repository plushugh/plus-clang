#include <stdio.h>

int main(void)
{
    int vi[10];
    double vd[25];

    printf("Number of elements in array vi = %u\n", (unsigned)(sizeof(vi) / sizeof(vi[0])));
    printf("Number of elements in array vd = %u\n", (unsigned)(sizeof(vd) / sizeof(vd[0])));

    return 0;
}