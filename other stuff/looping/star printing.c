#include <stdio.h>
int main()
{
	int i=1,j=1;
	int r=0;
	printf("enter the number of rows that you want to print \n");
	scanf("%d",&r);
	
	while (i<=r)
	{
		while (j<=i)
		{
			printf("*");
			j++;
		}
		printf("\n");
		j=1;
		i++;
		
	}
	return 0;
}
