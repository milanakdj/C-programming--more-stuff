#include<stdio.h>

int main()
{	
	
	int i=0,m=0,s=0;
	int c=0;	
	int n;
	printf("enter the value of n \n");
	scanf("%d",&n);
	
	for (i=1;i<=n;i++)
	{
		if(i%3==0)
		printf("%d \t",i*i*i);
	}
	return 0;
}
