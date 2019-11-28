#include<stdio.h>

void patternPrinter(int row){
    int counter =1;
    for(int i=1; i<= row;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",counter);
            counter++;
        }
        printf("\n");
    }
}

int main(){
    patternPrinter(5);
}
