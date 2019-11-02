#include <stdio.h>

int main() {
    int n;
    double x;
    int a[3];

    printf("n's     address: %p\n", &n);
    printf("x's     address: %p\n", &x);
    printf("a[0]'s  address: %p\n", &a[0]);
    printf("a[1]'s  address: %p\n", &a[1]);
    printf("a[2]'s  address: %p\n", &a[2]);
    return 0;
}
