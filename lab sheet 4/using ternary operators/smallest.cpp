
#include <stdio.h>
#include <conio.h>

int main ()
{
	int a=0,b=0,c=0,d=0;
	printf("enter four numbers : \n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	a<b && a<c && a<d ?printf("the number %d is the smallest number ",a): b < a && b<c && b<d ? printf("the entered number %d is the smallest number ",b): d<a && d<c && d<b?printf("the entered number %d is the smallest number ",d) :printf("the entered number %d is the smallest number ",c);
	return 0;
	getch();	
}


