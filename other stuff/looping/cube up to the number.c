#include <stdio.h>

int main ()
{
	int a=0;
	printf("enter a number \n");
	scanf("%d",&a);
	
	int i=0;
	
	while(i<=a)
	{
		printf("%d \n",i*i*i);
		i++;
	}
	return 0;
}
