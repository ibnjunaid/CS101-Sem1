//Find HCF and LCm between two Numbers
#include<stdio.h>
int main(){
	int number1,number2;
	printf("Enter two  number whose HCF & LCM you want to find");
	scanf("%d%d",&number1,&number2);
	int number1_cpy = number1;
	int num_cp;
	//Assumption : onInput Number1 > Number2 
	while(){
		num_cp = number1 -number2;
		number1 = num_cp;
	}
	printf("\nThe HCF is :: %d",num_cp);
	printf("\n The LCM is :: %d",(number1_cpy*number2/num_cp));
}
