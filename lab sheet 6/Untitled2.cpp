#include<stdio.h>
int main()
{
	char a[4]="KCC";
	
	int aa = 0;
	int i=201;
	while (aa<99)
		{printf("%d \t",i);
		i++;
		aa++;
		
		}
	printf("\n");
	
	i=201;
	
	for(aa=0;aa<98;aa++)
		{	printf("%d \t",i);
			i++;
		}
	printf("\n");
	i=201;
	aa=0;
	do 
	{	printf("%d \t",i);
		i++;
		aa++;
		}while(aa<98);
	return 0;
}
