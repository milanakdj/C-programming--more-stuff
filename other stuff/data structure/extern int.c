#include<stdio.h>

extern int a;
int a=10;
void fun()
{
	a=20;
	printf("\t%d",a++);
}
int main()
{
	printf("%d",a);
	fun();
	printf("\t%d",a);
	register int bb;
	printf("\t%d",bb);

	return 0;
}

