
#include <stdio.h>
#include <conio.h>
#define PI 3.14159

int main ()
{
	float r;
	printf("enter radius of a circle : \n");
	scanf("%f",&r);
	printf("the area and circumference of circle with radius %f are  %f is %f",r,PI * r* r,2*r*PI);
	return 0;
	getch();	
}


