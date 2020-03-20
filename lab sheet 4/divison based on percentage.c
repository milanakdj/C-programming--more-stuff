
#include <stdio.h>
#include <conio.h>

int main ()
{
	int a=0,b=0,c=0,d=0,e=0,f=0,g=0;
	printf("enter seven  number relating to the marks you got in your exams : \n");
	scanf("%d%d%d%d%d%d%d",&a,&b,&e,&c,&d,&f,&g);
	float percentage;
	percentage = (a+b+c+d+e+f+g)/7 ;

	if (percentage>=80)
	{
		printf("congratulations ! you have secured distinction");
	}
	else if (percentage <=79 && percentage >=60)
	{
		printf("congratulations ! you have secured first division");
	}
	else if (percentage <=59 && percentage >=45)
	{
		printf("congratulations ! you have secured second division");
	}
	else if (percentage <=44 && percentage >=32)
	{
		printf("congratulations ! you have secured third division");
	}
	else
	{
		printf("sorry you have failed, better luck next time.");
	}
	return 0;
	getch();	
}


