#include<stdio.h>

int main()
{	
	
	int i=0,m=1,s=0;
	int c=0;	
	int n;

	while (c<11)
	{
		printf("%d \t",i);
		s=i+m;
		i=m;
		m=s;
		c++;
		
	}
	return 0;
}
