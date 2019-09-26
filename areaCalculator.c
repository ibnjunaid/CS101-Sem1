#include<stdio.h>
void square_area(){
	printf("You choose Square::\n");
	printf("Enter length of square");
	int side;
	scanf("%d",&side);
	printf("%d",side*side);
}
void triangle_area(){
	printf("You choose triangle::\n");
	printf("Enter length of triangle");
	int length;
	scanf("%d",&length);
	printf("Enter height of rectangle");
	int height;
	scanf("%d",&height);
	printf("%d",(length*height)/2);
}

void rectangle_area(){
	printf("You choose Rectangle::\n");
	printf("Enter length of rectangle");
	int length;
	scanf("%d",&length);
	printf("Enter breadth of rectangle");
	int breadth;
	scanf("%d",&breadth);
	printf("%d",length*breadth);
}

int main(){
   printf("----CHOOSE FROM THE MENU BELOW\n");
   printf("1.for area of Rectangle\n");
   printf("2.for area of square\n");
   printf("3.for area of traingle\n");
   printf("yOUR CHOICE::");
   int choice = 1;
   scanf("%d",&choice);
 
   switch(choice){
	case 1 : rectangle_area();
		 break;
	case 2 : square_area();
		 break;
	case 3 : triangle_area();
		 break;
	default : printf("Wrong choice try again\n");
	}
   return 0;
}
