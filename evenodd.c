#include<stdio.h>

int main(){
    printf("Enter any number");
    int number;
    scanf("%d",&number);
    if(number & 1){
	printf("Number is Odd");
    }
    else
	printf("Number is Even");
    return 0;
}
