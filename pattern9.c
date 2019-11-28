#include<stdio.h>
#include<math.h>
void patternPrinter(int row){
    for(int i=0;i<row;i++){
        int num = pow(11,i);
        printf("%d\n",num);
    }
}

int main(){
    patternPrinter(5);
}