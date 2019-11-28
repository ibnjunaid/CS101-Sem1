#include<stdio.h>

void pattern(int row,int col){
    int start = 1;
    int end = col;
    for (int i= i; i<= row;i++){
        for(start ; start <= i; ++start){
            printf("* ");
        }
        for(start; start < end ;++start){
            printf(" ");
        }
        for (start; start<=end;++start){
            printf("*");
        }
    }
}