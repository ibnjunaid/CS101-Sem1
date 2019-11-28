#include<stdio.h>
#include "/Users/osamabinjunaid/Work/CS101-Sem1/src/Assignment1/factorial.c"
#include <math.h>
double summation(int X, int number_of_terms){
    double sum = 0;
    for(int i =1;i<=number_of_terms;i++){
        sum += ( pow(X,i) )/factorial(i);
    }
    return sum;
}

int main(){
    printf("Enter The value of X:");
    int x,number_of_terms;
    scanf("%d",&x);
    printf("Enter the number of terms.");
    scanf("%d",&number_of_terms);
    double summed = summation(x,number_of_terms);
    printf("%lf",summed);
}