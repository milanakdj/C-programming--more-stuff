#include<stdio.h>
int main()
{
	char a[4]="KCC";
	
	int aa = 0;
	while (aa<3)
		{printf("%s \t",a);
		aa++;
		
		}
	printf("\n");
	aa=0;
	for(aa=0;aa<3;aa++)
		printf("%s \t",a);
	aa=0;
	printf("\n");
	do 
	{	printf("%s \t",a);
		aa++;
		
		}while(aa<10);
	return 0;
}
