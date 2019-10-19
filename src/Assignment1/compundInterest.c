//program to calculate compound interest

#include<stdio.h>
#include<math.h>

int main(){
    
    int principle,rate,compound,time;
    printf("Enter principle:");
    scanf("%d",&principle);
    printf("Enter rate: ");
    scanf("%d",&rate);
    printf("Enter compound: ");
    scanf("%d",&compound);
    printf("Enter time ");
    scanf("%d",&time);
    float amount = principle*pow((1+rate/compound),compound*time);
    printf("The Interesr Amount is :: %d",amount);
    return 0;
}

