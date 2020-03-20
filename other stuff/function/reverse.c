#include<stdio.h>
void l();
int main()
{
	printf("enter a line of text \n");
	l();
	
	return 0;
}

void l()
{
	char c;
	c=getchar();
	
	if(c!='\n')
		{
		l();
		printf("%c",c);
		
		}
	
}
