#include <stdio.h>

int main(void)
{
    int sato = 178;
    int sanaka = 175;
    int masaki = 179;

    int *isako, *hiroko;

    isako = &sato;
    hiroko = &masaki;

    printf("The height of  isako is %d\n", *isako);
    printf("The height of hiroko is %d\n", *hiroko);

    isako = &sanaka;

    *hiroko = 180;

    putchar('\n');
    printf("The height of   sato is %d\n", sato);
    printf("The height of sanaka is %d\n", sanaka);
    printf("The height of masaki is %d\n", masaki);
    printf("The height of  isako is %d\n", *isako);
    printf("The height of hiroko is %d\n", *hiroko);

    return 0;
}
