#include<stdio.h>
int prime(int *a)
{
	int i=0,s=1;
	for(i=1;i<=*a;i++)
	{
		if(*a%i==0)
		s++;
	}
	if(s==3)
	return 0;
	else
	return 1;
	}
	
int main()
{
	int n,*p=&n;
	printf("enter a number \n");
	scanf("%d",p);
	int ans=prime(p);
	ans==0?printf("the number is prime"):printf("the number is not prime");
	return 0;
}

