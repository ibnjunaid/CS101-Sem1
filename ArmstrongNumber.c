#include<stdio.h>
#include<math.h>
#define SIZE 30

void is_ArmStrongNumber(int number){
	int number_original = number;
	int counter =0;
	int arr[SIZE] = {0};
	int squaredNumber=0;
	while(number != 0)
	{
	  arr[counter] = number%10;
	  number = number/10;
	  counter++;
	}
	for (int i =0; i<counter ; i++){
		squaredNumber += pow(arr[i],counter);
	}
	if(squaredNumber == number_original){
		printf("Armstrong Number");
	}
	else{
		printf("%d\t%d",squaredNumber,number_original);
	}
}

int main(){
	int number;
	printf("Please enter any number::");
	scanf("%d",&number);
	is_ArmStrongNumber(number);
	return 0;
}
