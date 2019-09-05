#include<stdio.h>

void fibonacci(int range);

int main()
{

    int range;
    printf("Enter the range");
    scanf("%d",&range);
    fibonacci(range);
}

void fibonacci(int range){
    int prev = 0,next = 1,temp =0;
    while(range){
      printf("%d  ",next);
      temp = next;
      next += prev;
      prev = temp;
      range--;
    }
}

