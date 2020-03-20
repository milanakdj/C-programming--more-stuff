#include <stdio.h>
int main()
{
	int a=0,b=0,c=0;
	
	printf("enter 2 number \n");
	scanf("%d%d",&a,&b);
	
	if (a>b)
	{
		c=a+b;
		printf("the required result is %d",c);
	}
	
	else 
	{
		while(a<b)
		{
			printf("enter the number such that first is greater than the second one \n");
			scanf("%d%d",&a,&b);
			
			if (a>b)
			{
				c=a+b;
				printf("the required result is %d",c);
//				goto label;
			}
		}
	}
	
	label:
		return 0;
}
