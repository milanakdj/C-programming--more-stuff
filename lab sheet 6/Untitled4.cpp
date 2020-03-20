#include<stdio.h>
int main()
{	
	int aa = 0;
	int i=0,n=0;
	printf("enter the value of n ");
	scanf("%d",&n);
	int a[100];
	
	for(aa=0;aa<n;aa++)
		{	
			printf("enter the value of %d number ",aa+1);
			scanf("%d",&a[aa]);
			i=i+a[aa];
		}
	printf("sum of  number is %d and average of  numbers is %d ",i,i/n);
	
	return 0;
}
