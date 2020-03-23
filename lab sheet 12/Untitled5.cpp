#include<stdio.h>
void factorial(int *a)
{
	int i=0,s=1;
	for(i=1;i<=*a;i++)
	{
		s=s*i;
	}
	*a=s;
	}
	
int main()
{
	int n,*p=&n;
	printf("enter a number \n");
	scanf("%d",p);
	factorial(p);
	printf("the factorial is %d",*p);
	return 0;
}

