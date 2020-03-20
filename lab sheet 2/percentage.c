
#include <stdio.h>
#include <conio.h>

int main ()
{
	int a=0,b=0,c=0,d=0,e=0,f=0,g=0;
	printf("enter seven  number relating to the marks you got in your exams : \n");
	scanf("%d%d%d%d%d%d%d",&a,&b,&e,&c,&d,&f,&g);
	float percentage;
	percentage = (a+b+c+d+e+f+g)/7 ;
	printf("the percentage you got is %f",percentage);
	return 0;
	getch();	
}


