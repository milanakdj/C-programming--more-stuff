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
	struct emp e;
	printf("enter the emp id and salary \n");
	scanf("%d%d",&e.emp_id,&e.emp_salary);
	printf("enter the emp name\n");
	scanf("%s",e.emp_name);
	printf("enter the emp post\n");
	scanf("%s",e.emp_post);
	
	printf("the employee details are \n emp name : %s\n emp post : %s \n emp id : %d \n emp salary : %d \n",e.emp_name,e.emp_post,e.emp_id,e.emp_salary);
	
	
}
