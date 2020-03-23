#include<stdio.h>
int main()
{
	int a[3][4],i,j,s=0;
	int b[3][4];
	int c[3][4];
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);

		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&b[i][j]);

		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			c[i][j]=-b[i][j]+a[i][j];
		}
		printf("\n");
	}
	
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",c[i][j]);

		}
		printf("\n");
	}

	
	
	
	return 0;
}
