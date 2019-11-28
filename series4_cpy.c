#include<stdio.h>

double sum(int number){
    double sum = 0;
    int fact = 1;
    for(int i =1 ; i<=number; i++){
        fact *= i;
        sum += 1.0/fact;
        printf("Test::%f\t",sum);
    }
    return sum;
}

int main(){
    int n;
    printf("Enter Range:");
    scanf("%d",&n);
    double summed = sum(n);
    printf("\nSum is : %f",summed); 
    return 0;
}
