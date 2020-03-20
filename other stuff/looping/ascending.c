#include<stdio.h>
int main()
{
	int a[10];
	printf("enter 10 values \n");
	int i,s,j;
	for (i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	s=a[0];
	for (i=0;i<10;i++)
	{
	for (j=i;j<9;j++)
	{
		if (a[i]>a[j+1])
		{
			s=a[i];
			a[i]=a[j+1];
			a[j+1]=s;
			
		}
	}
}
		for (i=0;i<10;i++)
	{
		printf("%d \t",a[i]);
			}	
	
	
	return 0;
}
