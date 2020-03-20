#include<stdio.h>
#include<ctype.h>
#include<conio.h>

#include<math.h>
#define PI 3.1415


void norp(float l)
{
	if(l>0)
		printf("the number is positive \n");
	else
		printf("the entered number is negative \n");
	
}

void eoro(int l)
{
	if(l%2==0)
		printf("the number is even \n");
	else
		printf("the entered number is odd \n");
	
}

void per(int a, int b, int c, int d, int e, int f, int g)
{
	float percentage=(a+b+c+d+e+f+g)/10;
	printf("the percentage of the marks obtained is %f \n",percentage);
}


int main()
{
	float l=0,bb=0;
	
	printf("enter a number \n");
	scanf("%f",&l);
	norp(l);
	
	printf("enter a number \n");
	scanf("%d",&bb);
	eoro(bb);
		
		
	int a=0,b=0,c=0,d=0,e=0,f=0,g=0;
	printf("enter seven  number relating to the marks you got in your exams : \n");
	scanf("%d%d%d%d%d%d%d%d",&a,&b,&e,&c,&d,&e,&f,&g);
	per(a,b,c,d,e,f,g);
	return 0;
}
