#include<stdio.h>

int main()
{	
	
	int i=0,j=0,m=1,s=0;
	int c=0,count=1;	
	int n;
	int jj[100];
	printf("enter a number \n");
	scanf("%d",&n);
	
	while (c<101)
	{
		s=i+m;
		i=m;
		m=s;
		jj[c]=i;	

		c++;
	}
	
	for (i=0;i<100;i++)
	{
		
	if (jj[i]==n)
			{
			printf("the entered number is in the fibonacci series \n");
			count=0;
			break;
			}

	}
	if (count==1)
		printf("not fibonacci series \n");
	return 0;
}
