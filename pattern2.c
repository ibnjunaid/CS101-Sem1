#include<stdio.h>

void pattern() {
    char ch ='a';
    for (int i =1;i<=6; i++){
        for(int j =6;j>=i;j--){
            printf(" ");
        }
        for(char k ='a';k<=ch;k++){
            printf("%c ",k);
        }
        printf("\n");
        ch++;
    }
    ch = 'e';
    for(int i=2;i<=6;i++){
        for (int j=1;j<=i;j++){
            printf(" ");
        }
        for(int k ='a';k<=ch;k++){
            printf("%c ",k);
        }
        printf("\n");
        ch--;
    }
}

int main(){
    pattern();
}
