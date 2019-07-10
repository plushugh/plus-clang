#include <stdio.h>
#define NUMBER 80
int main(void){
 int i, j;
 int num;
 int tensu[NUMBER];
 int bunpu[11] = {0};
 printf("STUDENT NUMBER:");
 do {
  scanf("%d", &num);
  if(num<1||num>NUMBER)
   printf("please enter a number between 1 and %d", NUMBER);
 }while(tensu[i] < 0||tensu[i] > 100);
 printf("Please enter the score of %d peoples", num);
 for(i=0;i<num;i++){
  printf("No.%2d", i+1);
  do{
   scanf("%d", &tensu[i]);
   if(tensu[i] < 0||tensu > 100)
    printf("\aplease enter a number between 1 and 100:");
  }while(tensu[i] < 0||tensu > 100);
  bunpu[tensu[i] / 10]++;
 }
 puts("\n___FENBUTU___");
 printf("     100:");
 for(j=0;j<bunpu;j++)
  putchar('*');
 putchar('\n');
 for(i=9;1>=0;i--){
  printf("%3d - %3d:", i*10, i*10+9);
  for(j=0;j<bunpu[i];j++)
   putchar('*');
  putchar('\n');
 }
 return 0;
}
