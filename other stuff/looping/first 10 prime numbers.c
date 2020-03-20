#include <stdio.h>

int main()
{
	int a=1;
	int count=0;
	int i=1;
	int p=0;
	while(count<=10)
	{
		while (i<=a)
		{
			if (a%i==0)
			{
				p++;
			}
			i++;
		}
		if (p==2)
		{
			printf("%d \n",a);
			count++;
		}
		a++;
		i=1;
		p=0;
	}
	return 0;
}
