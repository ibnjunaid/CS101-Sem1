//Progream to find greatest of three numbers
#include<stdio.h>

int main(){
   int number1,number2,number3;

   scanf("%d%d%d",&number1,&number2,&number3);
   if(number1> number2 && number2 > number3)
	  
	   printf("The greatest number is: %d",number1); 

   else if(number2> number1 && number2 > number3)
	 
	   printf("The greatest number is: %d",number2); 
   else
	   printf("The greatest number is : %d",number3);
   return 0;
}
