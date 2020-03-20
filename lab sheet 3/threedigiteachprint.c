
#include <stdio.h>
#include <conio.h>

int main ()
{
	int a=0,b=0,c=0;
	printf("enter a three digie number \n");
	scanf("%d",&a);
	
	while (a!=0)
	{
		b=a%10;
		printf("%d \n",b);
		a=a/10;
	}



	return 0;
	getch();	
}


