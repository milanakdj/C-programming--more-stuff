
#include <stdio.h>
#include <conio.h>

int main ()
{
	int a=0;
	printf("enter a number : \n");
	scanf("%d",&a);
	a>0?printf("the entered number %d is a postive number ",a):printf("the entered number %d is a negative number ",a);
	return 0;
	getch();	
}


