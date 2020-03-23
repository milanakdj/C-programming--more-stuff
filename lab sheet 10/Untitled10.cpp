#include<stdio.h>
int main()
{
	int a[10][10],i,j,k=0,m,n;
	int b[10][10];
	int c[10][10];
	printf("enter the value of m and n\n")
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);

		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);

		}
	}
	for(i=0;i<m;i++)
	{
		c[i][j]=0;
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
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
