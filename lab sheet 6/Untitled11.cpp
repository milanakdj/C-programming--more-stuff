#include<stdio.h>

int main()
{	
	
	int i=0,m=0,s=0;
	int c=0;	
	for (i=100;i<=5000;i++)
	{
		c=i;
		while(c!=0)
		{
			m=c%10;
			s=(m*m*m)+s;
			c=c/10;
		}
		if (i==s)
		{
			printf("the required number is %d is armstrong \n",s);
		}
		s=0;	
	}
	return 0;
}
