#include<stdio.h>
#include<math.h>
int main()
{	
	int aa = 0;
	int i=0,n=0,m=0;
	printf("enter the value of n ");
	scanf("%d",&n);
	
	while (n!=0)
	{
		m=n%10;
		i=i+m;
		n=n/10;
	}
		printf("the required sum is  %d ",i);
	
	return 0;
}
