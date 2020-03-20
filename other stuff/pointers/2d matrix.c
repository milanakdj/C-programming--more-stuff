#include<stdio.h>

int main()
{
	int a[2][3],b[2][3];
	int *p=a, *q=b;
	
	int i;
	int j=0;
	printf("enter the firt matrix \n");
	for (i=0; i<2; i++)
	{
		for (j=0; j<3 ; j++)
		{
			scanf("%d",p);
			p++;
			
		}
	}
	
	p=&a;
	for (i=0; i<2; i++)
	{
		for (j=0; j<3 ; j++)
		{
			printf(" %d ",*p);
			p++;
		}
		printf("\n");
	}
}
