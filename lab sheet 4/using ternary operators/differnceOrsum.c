
#include <stdio.h>
#include <conio.h>

int main ()
{
	int a=0,b=0;
	printf("enter two numbers : \n");
	scanf("%d%d",&a,&b);
	a>b ?printf("the difference of %d from %d is %d ",b,a,a-b):printf("the sum of %d and %d is %d",a,b,a+b);
	return 0;
	getch();	
}


