#include<stdio.h>
void patternPrinter(int row){
    int space,rows,k=0,i;
    for (i=1;i<=row;++i,k=0){
        for(space =1;space<=row-i;++space){
            printf("  ");
        }
        while(k != 2*i -1){
            printf("* ");
            ++k;
        }
        printf("\n");
    }
}

int main(){
    int row;
    printf("Enter the number of Rows::");
    scanf("%d",&row);
    patternPrinter(row);
}