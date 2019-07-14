#include <stdio.h>
int sqr(int x){
return x * x;
}
int diff(int a, int b){
return (a > b ? a - b : b - a);
}
int main(void){
    int x, y;
    puts("enter two integers:");
    printf("x:");scanf("%d", &x);
    printf("y:");scanf("%d", &y);
    printf("The of x and y is %d.", diff(sqr(x), sqr(y)));
    return 0;
}
