#include<stdio.h>

void largest(int a[5])
{
	int n=1,l=a[0];
	while(n<5)
	{
		if(l<a[n])
			l=a[n];
		n++;
	
	}
	printf("the largest among the number is %d",l);
	
}

void smallest(int a[5])
{
	int n=1,l=a[0];
	while(n<5)
	{
		if(l>a[n])
			l=a[n];
		n++;
	
	}
	printf("the smallest among the number is %d",l);
	
}
void read()
{
	int a[5],n;
	printf("enter 5 numbers\n");
	while(n<5)
	{
		scanf("%d",&a[n]);
		n++;
	}
	largest(a);
	smallest(a);
}
int main()
{
	read();
	return 0;
}
