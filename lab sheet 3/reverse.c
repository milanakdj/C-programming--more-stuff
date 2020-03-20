
#include <stdio.h>
#include <conio.h>

int main ()
{
	int a=0,b=0,r=0;
	printf("enter a five digit number : \n");
	scanf("%d",&a);
	
	while (a!=0)
	{
		b=a%10;
		r=r*10+b;
		a=a/10;
		
	}
	
	printf("the reverse of the entered number is %d",r);

	return 0;
	getch();	
}


