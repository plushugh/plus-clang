#include <stdio.h>

void hiroko(int *height)
{
    if (*height < 180)
    {
        *height = 180;
    }
    
}

int main(void)
{
    int sato = 178;
    int sanaka = 175;
    int masaki = 179;

    hiroko(&masaki);

    printf("The height of sato   is: %d\n", sato);
    printf("The height of sanaka is: %d\n", sanaka);
    printf("The height of masaki is: %d\n", masaki);

    return 0;
}