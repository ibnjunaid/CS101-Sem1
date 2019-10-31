#include<stdio.h>

int factorial(int number){
	if (number ==0)
		return 1;
	else 
		return number*factorial( number-1);
}

int main(){
	int number,summed_factorial=0;
	printf("Enter any Number::");
	scanf("%d",&number);
	int number_cpy= number;
	while(number){
		summed_factorial += factorial(number%10);
		number = number / 10;
	}
	if(number_cpy == summed_factorial)
		printf("Peterson Number\n");
	else
		printf("Nope !! This is not a Peterson Number\n");
	return 0;
}
