
#include <stdio.h>
#include <conio.h>

int main ()
{
	int A=0,B=0;
	printf("enter two number to swap their position \n" );
	scanf("%d%d",&A,&B);
	int c=0;
	c=A;
	A=B;
	B=c;
	printf("the swapped position of two numbers when swapped is %d and %d",A,B);
	return 0;
	getch();	
}


