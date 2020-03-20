#include<stdio.h>
int main()
{	
	int aa = 0;
	int i=201,o=0,e=0;

	
	for(aa=0;aa<100;aa++)
		{	
			if (aa%2==0)
				e+=aa;
			else
				o+=aa;
		}
	printf("sum of even number is %d and sum of odd numbers is %d ",e,o);
	
	return 0;
}
