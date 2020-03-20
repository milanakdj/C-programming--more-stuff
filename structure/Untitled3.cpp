#include<stdio.h>
struct emp
{
	int emp_id;
	char emp_name[40];
	char emp_post[40];
	int emp_salary;
};

int main()
{
	struct emp e[10];
	int i=0;
	for(i=0;i<10;i++)
	{
	printf("enter the emp id and salary \n");
	scanf("%d%d",&e[i].emp_id,&e[i].emp_salary);
	printf("enter the emp name\n");
	scanf("%s",e[i].emp_name);
	printf("enter the emp post\n");
	scanf("%s",e[i].emp_post);
	
	}
	
	for(i=0;i<10;i++)
	{
		if(e[i].emp_salary>15000)
	printf("the employee details are \n emp name : %s\n emp post : %s \n emp id : %d \n emp salary : %d \n",e[i].emp_name,e[i].emp_post,e[i].emp_id,e[i].emp_salary);
	
	
	}
}
