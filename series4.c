#include<stdio.h>
#include "src/Assignment1/factorial.c"

int main(){
    int range;
    float sum=0;
    printf("Enter the range:");
    scanf("%d",&range);
    for (int i =1; i<=range ;i++){
       float number = 1.0/( factorial(i));
       sum += number;
    }
    printf("\n\n%f",sum);
}
