#include<stdio.h>

int main()
{	
	
	int i=0,m=0,s=0;
	int c=0,n=0;	
	printf("enter a digit \n");
	scanf("%d",&n);
	int mm=n;
	
		while(n!=0)
		{
			m=n%10;
			if (m%2==0)
			{
				c=1;
				
			}
			else
			{
				c=0;
				break;
			 } 
			
			n=n/10;
		}
	if (c==1)
		{
			printf("the required number is %d is riley number \n",mm);
		}
	else
			printf("the required number is %d is not riley number \n",mm);

	
	return 0;
}
