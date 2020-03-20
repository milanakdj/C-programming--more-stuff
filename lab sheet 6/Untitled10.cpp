#include<stdio.h>
#include<math.h>
int main()
{	
	int aa = 0;
	int i=0,n=0,m=0,b;
	printf("enter the value of n ");
	scanf("%d",&n);
	int c=b=n;
	
	while (n!=0)
	{
		m=n%10;
		i=i*10+m;
		n=n/10;
	}
	if (b==i)
		printf("the required number is %d is palindrome ",i);
		
		i=0,m=0;
		while (b!=0)
	{
		m=b%10;
		i=m*m*m+i;
		b=b/10;
	}
	if (c==i)
		printf("the required number is %d is armstrong ",i);
	return 0;
}
