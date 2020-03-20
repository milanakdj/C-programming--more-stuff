// remainder using pointers 
#include<stdio.h>
#include<string.h>

int main()
{
	
	int a,b;
	int *p,*q;
	p=&a;
	q=&b;
	printf("enter 10 numbers \n");
	int i;
	for (i=0; i<10; i ++)
	{
		scanf("%d",p);
		*q+=*p;

	}
	printf("the sum of the two number is : %d",*q);	

	return 0;
}
