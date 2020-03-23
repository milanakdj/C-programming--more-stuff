#include<stdio.h>
#include<string.h>
int main()
{
	char a[1][20];
	char b[20];
	char c;
	int i,n=0,m=0;
	
	a[1][n]=getchar();
	while(a[1][n]!='\n')
	{
		n++;
		a[1][n]=getchar();	
	}
	a[1][n]='\0';
	strcpy(b,a[1]);
	
	for(i=0;i<(strlen(a[1])-1);i++)
	{
		for(m=i+1;m<strlen(a[1]);m++)
		{
			//(strcmp(a[1][i],a[1][m])==1
			if(a[1][i]>a[1][m])
			{
				c=a[1][i];
				a[1][i]=a[1][m];
				a[1][m]=c;
			}
		}
	}
	printf("%s",a[1]);
	return 0;
}

