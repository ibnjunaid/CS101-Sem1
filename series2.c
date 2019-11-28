#include<stdio.h>
#include<math.h>

int main(){
    int range,x,sum=0;
    printf("Enter the Range::");
    scanf("%d",&range);
    printf("Enter the value of x:");
    scanf("%d",&x);
    while(range){
        sum += pow(x,pow(range,range));
        range--;
    }
    printf("%d",sum);
}
