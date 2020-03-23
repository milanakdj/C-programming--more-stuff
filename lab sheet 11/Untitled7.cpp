#include<stdio.h>
#include<process.h>
void add(int m, int n,int a[10][10], int b[10][10])
{
	int c[m][n],i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int a[10][10],b[10][10],m,n,i,j,m1,n1;
	printf("enter the value of m and n\n");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	
	printf("enter the value of m and n\n");
	scanf("%d%d",&m1,&n1);
	
	if(m!=m1 || n!=n1)
	{
		printf("invalid matrixes as the row and the column of the matrixes are different from each other\n");
		exit(0);
	}
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	add(m,n,a,b);
	
	return 0;
}
