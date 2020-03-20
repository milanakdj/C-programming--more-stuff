#include<stdio.h>
#include<string.h>
struct st
{
	int id;
	char name[40];
	float per;	
};

int main()
{
	struct st s[10],a;
	printf("enter the information for the students below \n");
	
	int i=0;
	
	for (i=0;i<10;i++)
	{
		printf("enter the name for the student no %d: \n",i+1);
	    scanf("%s", (s+i)->name);
		printf("enter the id for the student no %d",i+1);
		scanf("%d",&(s+i)->id);
		printf("enter the percentage for student no %d",i+1);
		scanf("%f",&(s+i)->per);
	}
	int j=0,l;
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			l=strcmp((s+i)->name,(s+j)->name);
			if(l==1)
			{
				a=*(s+i);
				*(s+i)=*(s+j);
				*(s+j)=a;
			}
		}
	}
	
	
	for (i=0;i<10;i++)
	{
		printf("the name for the student no %d",i+1);
		printf("%s\n",(s+i)->name);
		printf("the id and the percentage for the student no %d",i+1);
		printf("%d \t %f\n",(s+i)->id,(s+i)->per);
	}
	return 0;
}
