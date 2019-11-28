#include<stdio.h>
#include "src/Assignment1/factorial.c"
#include<math.h>
double summmation(int number){
    double sum = 0;
    for(int i =0; i <= number; i++){
        double number = (1/factorial(i)) * pow(-1,i);
        sum += number;
    }
    return sum;
}

int main(){
    double value = summmation(2);
    printf("%f",value);
}
