
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
		r=b*b + r;
		a=a/10;
		
	}
	
	printf("the sum of square of each digit is %d",r);

	return 0;
	getch();	
}


