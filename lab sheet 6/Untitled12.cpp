#include<stdio.h>

int main()
{	
	
	int i=0,m=0,s=0;
	int c=0;	
	int a[10];
	
	for (i=0;i<10;i++)
	{
		printf("enter the age of person no. %d \n",i+1);
		scanf("%d",&a[i]);
		if (a[i]>=50 && a[i]<=60)
			c++;
	}
	printf("total number of people age 50 to 60 is %d",c);
	return 0;
}
