#include<stdio.h>
int main()
{
	int a=0,i=0,c=0,d=0;
	
	for(a=5;a>=1;a--)
	{
		while(c!=0)
		{
			printf("\t");
			c--;
		}
		for(i=1;i<=a;i++)
		{
			printf("%d \t",i);
			
		}
		printf("\n");
		d++;
		c=d;
	}
	return 0;
}
