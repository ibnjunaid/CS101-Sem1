#include<stdio.h>
#include<stdbool.h>
 
bool isDivisibleby2and3(int number){
	return ( (number % 2 == 0) && (number %3 ==0) );
}

int main()
{
  int number;
  printf("Enter any Number");
  scanf("%d",&number);
  isDivisibleby2and3(number) ? printf("divisible by 2 and 3\n") : printf("not divisible by 2 and 3\n");
  return 0;
}
