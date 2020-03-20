#include<stdio.h>
int main()
{
	int a=0,b=1,c=0,i=0;
	printf("this is a fibonacci series \n");
	
	for(i=1;i<=10;i++)
	{
		printf("%d \t",a);
		c=a;
		a=b;
		b=b+c;
		
	}
	return 0;
}
