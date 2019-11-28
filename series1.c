#include<stdio.h>

int main(){
    int range;
    printf("Enter the range::");
    scanf("%d",&range);
    int sum = 0;
    while(range){
        sum += range;
        range--;
    }
    printf("%d",sum);
}
