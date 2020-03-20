
#include <stdio.h>
#include <conio.h>

int main ()
{
	int l=0,b=0;
	printf("enter two number for length and breadth : \n");
	scanf("%d%d",&l,&b);
	printf("the area and the perimeter of the entered data are : %d and %d respectively ",l*b,2* (l+b));
	return 0;
	getch();	
}


