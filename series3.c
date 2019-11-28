#include<stdio.h>
#include<math.h>
int main(){
    int sum = 0;
    int range,x;
    printf("Enter the Range");
    scanf("%d",&range);
    printf("Enter X :");
    scanf("%d",&x);
        for(int i=0;i < range ;i++){
            int number = pow(x,i) * pow(-1,i);
            sum += number;
        }
        printf("%d",sum);
    return 0;
}
