#include <stdio.h>

void set_zero (int v[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        v[i]=0;
}
void print_array (const int v[], int n)
{
    int i;
    printf("{ ");
    for ( i = 0; i < n; i++)
    {
        printf("%d", v[i]);
    }
    printf(" }");
}
int main()
{
    int ary1 [] = {1, 2, 3, 4, 5};
    int ary2 [] = {3, 2, 1};

    printf("ary1 =");   print_array(ary1, 5);   putchar('\n');
    printf("ary2 =");   print_array(ary2, 3);   putchar('\n');
    set_zero(ary1, 5);
    set_zero(ary2, 3);
    printf("Gave 0 to all elements in the two arrays");
    printf("ary1 =");   print_array(ary1, 5);   putchar('\n');
    printf("ary2 =");   print_array(ary2, 3);   putchar('\n');
    return 0;
}
