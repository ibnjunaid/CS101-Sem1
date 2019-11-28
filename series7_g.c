#include <stdio.h>
#include "src/Assignment1/factorial.c"
#include <math.h>

double summation(double X,double number_of_terms){
    double sum = 0;
    for(int i =0;i<number_of_terms;i++){
        int num = 2*i+1;
        double sumeed = (( pow(X,num)) / factorial(num)) * pow(-1,i);
        sum += sumeed;
        printf("Debug::%lf\n",sumeed);
    }
    return sum;
}

int main(){
    printf("Enter The value of X:");
    double x, number_of_terms;
    scanf("%lf",&x);
    printf("Enter the number of terms.");
    scanf("%lf",&number_of_terms);
    double summed = summation(x,number_of_terms);
    printf("%lf",summed);
}