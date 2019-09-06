#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define AND &&
#define OR ||

bool isPrime(int number){
  for(int i =1 ;i<=sqrt(number);i++){
    if(number%i == 0 AND (i!=1 OR i!= number)){
      return false;
    }
  }
  return true;
}

int main(void) {
  int number ;
  printf("Enter any Number");
  scanf("%d",&number);
  isPrime(number)?printf("true"):printf("false");
  return 0;
}
