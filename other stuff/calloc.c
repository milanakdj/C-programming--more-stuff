#include<stdio.h>

struct student
{
	int id;
	char name[40];
	float per;
};

int main()
{
	
	int n,i,j;
	struct student *h,saa;
	printf("enter the number of student details that you want to enter\n");
	scanf("%d",&n);
	h=(struct student*)calloc(n,sizeof(struct student));
	
	if(h == NULL)                     
    {
        printf("Error! memory not allocated.");
        exit(0);
    }
	for(i=0;i<n;i++)
	{
		printf("enter the name of the student no. %d",i+1);
		scanf("%s",(h+i)->name);
		printf("enter the id and then the percentage of the student no. %d",i+1);
		scanf("%d%f",&(h+i)->id,&(h+i)->per);
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((h+i)->id > (h+j)->id)
			{
				saa=*(h+i);
				*(h+i)=*(h+j);
				*(h+j)=saa;				
			}
		}
		
	}
	
	
	for(i=0;i<n;i++)
	{
		printf("The name of the student no. %d \n",i+1);
		printf("%s \n",(h+i)->name);
		printf("The id and then the percentage of the student no. %d \n",i+1);
		printf("%d\t%f\n",(h+i)->id,(h+i)->per);
	}
	
	
	free(h);
	
	return 0;
}
