#include<stdio.h>
#include<string.h>
int main()
{
	char name[10][40],temp[40];
	int i,j;
	for(i=0;i<10;i++)
	{
		printf("enter the name %d ",i+1);
		scanf("%s",name[i]);
		
	}
	
	for(i=0;i<9;i++)
	{		
		for(j=i+1;j<10;j++)
		{
			if(strcmp(name[i],name[j])==1)
			{
				strcpy(temp,name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],temp);
			}
			
		}	
	}
	printf("this part works\n");
	for(i=0;i<10;i++)
	{
		printf("enter the name %d ",i+1);
		printf("%s",name[i]);
		
	}
	return 0;
}
