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
void read()
{
	int a[5],n;
	printf("enter 5 numbers\n");
	while(n<5)
	{
		scanf("%d",&a[n]);
		n++;
	}
	display(a);
}
int main()
{
	read();
	return 0;
}
