
#include <stdio.h>
#include <conio.h>

int main ()
{
	int a=0,b=0,c=0;
	printf("enter three numbers : \n");
	scanf("%d%d%d",&a,&b,&c);
	a>b && a>c ?printf("the number %d is the greatest number ",a): b > a && b>c ? printf("the entered number %d is the greatest number ",b): printf("the entered number %d is the greatest number ",c);
	return 0;
	getch();	
}


