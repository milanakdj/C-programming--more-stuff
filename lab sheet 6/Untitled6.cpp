#include<stdio.h>
int main()
{	
	int aa = 0;
	int i=0,n=0,f=1;
	printf("enter the value of n ");
	scanf("%d",&n);
	
	for(aa=1;aa<=n;aa++)
		{	
			if (n%aa==0)
				f=f*aa;
			
		}
	printf("the factorial of the entered number is %d",f);
	
	return 0;
}
