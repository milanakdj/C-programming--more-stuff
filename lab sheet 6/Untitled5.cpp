#include<stdio.h>
int main()
{	
	int aa = 0;
	int i=0,n=0;
	printf("enter the value of n ");
	scanf("%d",&n);
	int a[100];
	
	for(aa=1;aa<=10;aa++)
		{	
			printf("%d * %d = %d",n,aa,aa*n);
			printf("\n");
			
		}
	
	return 0;
}
