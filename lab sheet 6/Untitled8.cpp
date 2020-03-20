#include<stdio.h>
#include<math.h>
int main()
{	
	int aa = 0;
	int i=0,n=0,m=0;
	printf("enter the value of n");
	scanf("%d",&n);
	
	for (i=1;i<=n;i++)
	{
		if (n%i==0)
		m++;
	}
	if (m==2)
		printf("the required number %d is prime",n);
	
	return 0;
}
