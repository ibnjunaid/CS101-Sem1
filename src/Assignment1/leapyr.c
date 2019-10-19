#include<stdio.h>

int main(){
	int year ;
	printf("Enter any year you wanna check leap year for:");
	scanf("%d",&year);
	if ( (year %4 ==0 && year %100 != 0) || year %400 ==0)
		printf("\n%d is  a leap Year.",year);
	else
		printf("%d is not a leap year",year);
	return 0;
}
