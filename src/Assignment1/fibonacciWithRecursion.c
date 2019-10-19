#include<stdio.h>

void fibonacci(int range){
	static int current =0, next = 1;
	int temp =0;
		if (range > 0){
			printf("%d\n",next);
			temp = next;
			next += current;
			current = temp;
			fibonacci(range-1);
		}
}
		

int main(){
	printf("Enter the term upto which you want to find the fibonacci:");
	int range;
	scanf("%d",&range);
	fibonacci(range);
}
