#include<stdio.h>

int main()
{
	
	int *pp,n,i,e=0;
	printf("enter the value of n\n");
	scanf("%d",&n);
	pp=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",(pp+i));
		if(*(pp+i)%2==0)
			e++;
	}
	printf("%d\n%d",e,n-e);
	free(pp);
}
