#include<stdio.h>

int main()
{
	int i,*p,n,nn;
	printf("enter the value of n \n");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	
	printf("enter the value of n \n");
	scanf("%d",&nn);
	p=(int *)realloc(p,nn*sizeof(int));
	for(i=n;i<nn+n;i++)
	{
		scanf("%d",p+i);
	}
	
	
	for(i=0;i<nn+n;i++)
	{
		printf("%d\n",*(p+i));
	}
	
	
	
	free(p);
	return 0;
}
