
#include <stdio.h>
#include <conio.h>

int main ()
{
	float h=0,b=0,area=0;
	printf("enter two number for height and base of a triangle : \n");
	scanf("%f%f",&h,&b);
	area =  0.5*(h*b) ;
	printf("%f",area);
	printf("the area of the triangle is  %.2f sq. units",area);
	
	return 0;
	getch();	
}


