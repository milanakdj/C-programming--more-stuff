
#include <stdio.h>
#include <conio.h>

int main ()
{
	int a=0;
	printf("enter a number : \n");
	scanf("%d",&a);
	
	if (a>0)
	{
		printf("the entered number %d is positive number",a);
	}
	else 
	{
		printf("the entered number %d is negative number",a);
	}

	return 0;
	getch();	
}


