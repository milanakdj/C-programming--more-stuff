
#include <stdio.h>
#include <conio.h>

int main ()
{
	int a=0;
	printf("enter a number : \n");
	scanf("%d",&a);
	
	if (a%2==0)
	{
		printf("the entered number %d is an even  number",a);
	}
	else 
	{
		printf("the entered number %d is and odd number",a);
	}

	return 0;
	getch();	
}


