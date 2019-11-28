#include<stdio.h>

void patternPrinter(int row){
    for(int i =row;i>0;i--){
        for(int j= i; j>0; j--){
            printf("%d ",j);
        }
        printf("\n");
    }
} 

int main(){
    patternPrinter(5);
}