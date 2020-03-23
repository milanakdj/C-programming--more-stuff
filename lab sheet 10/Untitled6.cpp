#include<stdio.h>
int main()
{
	int a[3][3],i,j,k=0;
	int b[3][3];
	int c[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);

		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);

		}
	}
	for(i=0;i<3;i++)
	{
		c[i][j]=0;
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				c[i][j]=b[j][k]*a[i][k];
			}
		}
		printf("\n");
	}
	
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",c[i][j]);

		}
		printf("\n");
	}

	
	
	
	return 0;
}
