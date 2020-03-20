#include<stdio.h>

void eoro(int l)
{
	l%2 == 0 ? printf("the number is even \n") : printf("the entered number is odd \n");
	
}

void great(int a,int b, int c)
{
	a>b && a>c?printf("%d is the greatest number \n",a):b>a&& b>c?printf("%d is the greatest number \n",b):printf("%d is the greatest number \n",c);
}

void sord(int a, int b)
{
	a>b ?printf("the difference of %d from %d is %d ",b,a,a-b):printf("the sum of %d and %d is %d",a,b,a+b);

}

void smallaf(int a, int b, int c, int d)
{
	a<b && a<c && a<d ?printf("the number %d is the smallest number ",a): b < a && b<c && b<d ? printf("the entered number %d is the smallest number ",b): d<a && d<c && d<b?printf("the entered number %d is the smallest number ",d) :printf("the entered number %d is the smallest number ",c);
	
}

int main()
{
	int l=0;
	int a=0,b=0,c=0;
	int af=0,bf=0,cf=0,df=0;

	printf("enter a number \n");
	scanf("%d",&l);
	eoro(l);
	
	printf("enter three numbers : \n");
	scanf("%d%d%d",&a,&b,&c);
	great(a,b,c);
	
	int ax=0,bx=0;
	printf("enter two numbers : \n");
	scanf("%d%d",&ax,&bx);
	sord(ax,bx);

	
	printf("enter four numbers : \n");
	scanf("%d%d%d%d",&af,&bf,&cf,&df);
	smallaf(af,bf,cf,df);
	
	
		
	
	return 0;
}
