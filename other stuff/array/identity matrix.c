#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],i,j,k=0;
	printf("enter the first matrix \n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
	}

	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			if (i!=j && a[i][j]!=0)
			{
			k=1; 
			break;
			}
			else if (i==j && a[i][j]!=1)
			{
			k=1;
			}
			
			
		}
		printf("whats good my brother \n");
		if (k==1)
		break;
	}
	
	if (k==0)
	printf("the entered matrix is an identity matrix.");

	
	
	
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
			
		}
		printf("\n");
	}
}
