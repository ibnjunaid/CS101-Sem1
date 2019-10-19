#include<stdio.h>
#include<limits.h>
int main(){
	printf("%lu\n",sizeof(int));
	int x = 9;
	unsigned y = x;
	printf("%u",y);
	return 0;
}
