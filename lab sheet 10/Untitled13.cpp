#include<stdio.h>
#include<string.h>
int main()
{
	char a[40];
	char c[40];
	char b[40];
	printf("enter a string \n");
	scanf("%s",a);
	int len=strlen(a);
	printf("the length of the string is %d\n",len);
	
	printf("enter a string \n");
	scanf("%s",c);
	
	strcat(c,a);
	printf("the concatinated string is %s\n",c);
	
	strcpy(b,c);
	printf("the copied string is %s\n",b);
	
	printf("the value of the strings are %s and %s\n",a,c);
	char d[49];
	strcpy(d,a);
	strcpy(a,c);
	strcpy(c,d);
	
	
	printf("the value after being swapped of the strings are %s and %s\n",a,c);
	
	int cc=strcmp(a,c);
	printf("the value of the string comparision of the above strings is %d",cc);
	return 0;
}

