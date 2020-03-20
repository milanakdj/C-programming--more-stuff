#include<stdio.h>

void swap(float *a, float *b)
{
	float i=*a;
	*a=*b;
	*b=i;
	
}

int main()
{
	float a,b, *p=&a, *q=&b;
	printf("enter two numbers \n");
	scanf("%f%f",p,q);
	swap(p,q);
	printf("the swapped value are %f and %f",*p,*q);
	return 0;
	
}
