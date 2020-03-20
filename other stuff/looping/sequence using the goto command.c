#include <stdio.h>

int main ()
{
	int a =1,b=1,c=1;
	
	labe:
		b=c*a;
		printf("%d ",b);
		a=a+1;
		if (a<=10)
		{
			goto labe;
		}
	else if (a>10 && b<100)
		{
			printf("\n");
			a=1;
			c++;
			goto labe;

		}
			return 0;
}
