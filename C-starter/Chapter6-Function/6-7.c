#include <stdio.h>

void put_stars(int n)
{
    while (n-- > 0)
        putchar('*');
}

int main(void)
{
    int i, len;
    printf("Triangle: \n");
    printf("short edge:");
    scanf("%d", &len);
    for(i = 1; i <= len; i++){
        put_stars(i);
        putchar('\n');
    }
    return 0;
}
