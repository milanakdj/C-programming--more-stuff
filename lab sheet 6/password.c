#include<stdio.h>
int main()
{
	int i=0;
	printf("Enter a password\n");
	char pass[100];
	
	do
	{
		pass[i]=getch();
		printf("*");
		i++;
	}
	while(pass[i-1] != 13); // '\r'
	
	printf("the entered string is %s",pass);
	
	return 0;
}
