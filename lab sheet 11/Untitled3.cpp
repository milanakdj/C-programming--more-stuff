#include<stdio.h>


void display(int a[5])
{
	int n=0;
	while(n<5)
	{
	printf("%d\n",a[n]);
	n++;
	
	}
	
}

void sum(int a[5],int b[5])
{
	int c[5];
	int n=0;
	while(n<5)
	{
		c[n]=a[n]+b[n];
		n++;
	}
	display(c);
}
void read()
{
	int a[5],b[5],n;
	printf("enter 5 numbers\n");
	while(n<5)
	{
		scanf("%d",&a[n]);
		n++;
	}
	n=0;
	printf("enter 5 numbers\n");
	while(n<5)
	{
		scanf("%d",&b[n]);
		n++;
	}
	
	sum(a,b);

}
int main()
{
	read();
	return 0;
}
