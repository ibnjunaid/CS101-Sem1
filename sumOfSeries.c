#include<stdio.h>

int sumOfSeries(int range){
    int sum = 0;
    for(int x = range ;x >=0; x--)
        sum += x;
    return range;
}
int main(){
    printf("Sum is: %d",sumOfSeries(9));
}
