#include<stdio.h>
#include<math.h>
int main(){
	printf("Enter any Number");
	int number;
	scanf("%d",&number);
	int squaredNumber = number * number ;
	int lastDigits = 0;
	int counter = 0;
	int number_cpy = number;
	while(number){
		lastDigits += (squaredNumber %10)*pow(10,counter);
		squaredNumber = squaredNumber/10;
		number = number /10;
		counter++;
	}
	if(number_cpy == lastDigits)
		printf("AutoMorphic:\n");
	else
		printf("Not Automorphic");
}
