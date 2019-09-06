#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define AND &&
#define OR ||

bool isPrime(int number){
	if(number == 1 OR number == 0)
			return false;
	for(int i =2 ;i<=(number);i++){
		    if(number%i == 0 AND i!= number)
		      return false;
		  return true;
		}
}

int main(void) {
  int number ;
 // printf("Enter any Number");
 // scanf("%d",&number);
  printf("%d",isPrime(4));
  printf("%d",isPrime(5));
  printf("%d",isPrime(3));
  printf("%d",isPrime(0));
  printf("%d",isPrime(1));
  return 0;
}
