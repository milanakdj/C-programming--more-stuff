#include<stdio.h>
#include<ctype.h>
#include<conio.h>
#define PI 3.1415

void product(int a,int b)
{

	printf("the product of the  numbers is %d",a*b);
	printf(" \n");

}
void sum(int a,int b)
{

	printf("the sum of the number is %d",a+b);
	printf(" \n");
}
void aandp(float r)
{
	printf("the area and the circumference of the sphere is %f and %f \n",4*PI*r*r*r,2*PI*r*r);
	
}
void fahren(float c)
{
	printf("the temperature in fahrenheit is %f \n",(c*9/5)+32);
	
}

void interest(int p, int r, int t)
{
	float interest=0;
	interest =p*t*r/100;
	printf("the interest is %f\n",interest);

}


int main()
{
	char a[40];
	sum(3,2);
	product(3,2);
	
	int x=0, y=0,r=0,c=0,p=0,ra=0,t=0;
	printf("enter 2 numbers \n");
	scanf("%d%d",&x,&y);
	
	product(x,y);
	
	printf("enter radius \n");
	scanf("%d",&r);
	
	aandp(r);
	
		
	printf("enter the temperature in centigrade \n");
	scanf("%d",&c);
	
	fahren(c);
	
	printf("enter the principla, rate and time \n");
	scanf("%d%d%d",&p,&ra,&t);

	interest(p,ra,t);
	return 0;
}
