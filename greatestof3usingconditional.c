#include<stdio.h>

int main(){
    int a, b , c;
    printf("Enter any three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    (a>b && a>c)?printf("%d is greatest",a):( (b>c && b>a) ? printf("%d is greatest",b) : printf("%d is greatest",c));
    return 0;
}
