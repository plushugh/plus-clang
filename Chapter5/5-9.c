#include <stdio.h>
int main(void){
 int i;
 int tensu[5];
 int sum = 0;
 printf("Enter\n");
 for(i=0;i<5;i++){
  printf("No. %2d:", i+1);
  scanf("%d", &tensu[i]);
  sum += tensu[i];
 }
 printf("Total: %5d\n", sum);
 printf("Mean: %5.1f\n", (double)sum / 5);

 return 0;
}
