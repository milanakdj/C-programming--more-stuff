
#include <stdio.h>
#include <conio.h>

int main ()
{
	int a=0,b=0,c=0;
	printf("enter a four digie number \n");
	scanf("%d",&a);
	
	while (a!=0)
	{
		b=a%10;
		c=c+b;
		a=a/10;
	}

	printf("the sum of each digit is %d",c);

	return 0;
	getch();	
}


