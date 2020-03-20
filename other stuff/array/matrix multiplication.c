#include<stdio.h>
int main()
{
	int r1, c1, r2, c2;
	printf("enter the row and the column for the first matrix \n");
	scanf("%d%d",&r1,&c1);
	printf("enter the row and the column for the second matrix \n");
	scanf("%d%d",&r2,&c2);
	
	while (c1!=r2)
	{
		printf("invalid input for the row and the column \n");
		printf("enter the row and the column for the first matrix \n");
		scanf("%d%d",&r1,&c1);
		printf("enter the row and the column for the second matrix \n");
		scanf("%d%d",&r2,&c2);
	}
	int a[r1][c1], b[r2][c2], c[r1][c2];
	int i,j,k;
	printf("enter the first matrix \n");
	for(i=0;i<r1;i++)
	{
		for( j=0;j<c1;j++)
			{
					scanf("%d",&a[i][j]);
				}	
	
	}
	
	printf("enter the second matrix \n");
	for(i=0;i<r2;i++)
	{
		for( j=0;j<c2;j++)
			{
					scanf("%d",&b[i][j]);
				}	
	
	}
	
	
	for(i=0;i<r1;i++)
	{
		for( j=0;j<c2;j++)
			{
				c[i][j]=0;
				for(k=0;k<c1;k++)
				{
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
				
				}	
	
	}
	
	for(i=0;i<r1;i++)
	{
		for( j=0;j<c2;j++)
			{
					printf("%d \t",c[i][j]);
				}	
		printf("\n");
	}
	return 0;
}
