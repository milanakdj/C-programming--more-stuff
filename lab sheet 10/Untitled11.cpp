#include<stdio.h>
#include<string.h>
int main()
{
	char a[1][20];
	char b[20];
	char c[1][20];
	int n=0,m=0;
	
	a[1][n]=getchar();
	while(a[1][n]!='\n')
	{
		n++;
		a[1][n]=getchar();	
	}
	a[1][n]='\0';
	strcpy(b,a[1]);
	n--;
	while(n>=0)
	{
		c[1][m]=b[n];
		m++;
		n--;
		}	
	c[1][m]='\0';
	
	printf("%s",c[1]);
	
	if(strcmp(c[1],a[1])==0)
	{
		printf("palindrome");
	}
	return 0;
}

