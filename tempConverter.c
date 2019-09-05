#include<stdio.h>

int main(){
  int temp ;
  printf("Enter temperature in C");
  scanf("%d",&temp);
  printf("Temperature in C is : %d", ((9/5)*temp) +32);
  return 0;
}
