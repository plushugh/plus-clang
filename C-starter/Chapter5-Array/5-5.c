#include <stdio.h>

int main(void)
{
    int i;
    int v[5] = {1,2,3,4,5};
    for(i=0;i<5;i++)
        printf("v[%d] = %d\n", i, v[i]);
    return 0;
}
