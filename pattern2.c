#include<stdio.h>
#include <stdio.h>

void pattern() {
	int i,j,k,t=0;
	for (i=1; i<=5; i++) {
		for (k=t; k<5; k++) {
			printf(" ");
		}
		for (j=0; j< i; j++) {
			printf(" * ");
			t = t + 1;
		}
		printf("\n");
	}
}

int main(){
    pattern();
}
