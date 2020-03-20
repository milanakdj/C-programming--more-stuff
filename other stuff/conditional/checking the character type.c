#include<stdio.h>
#include<ctype.h>

int main()
{
	int a;
	printf("Enter a character \n");
	scanf("%[^\n]",&a);
	
	if (isalpha(a))
	{
		printf("the entered character is an alphabet \n");
		if (islower(a))
		{
			printf("the entered character is a lowercase alphabet \n");
		}
		else
		{
			printf("the entered character is a lowercase alphabet \n");
		}
	}
	else if(isspace(a))
	{
		printf("the entered character is a space");
	}
		else if(ispunct(a))
	{
		printf("the entered character is a punctuation");
	}
		else if(isdigit(a))
	{
		printf("the entered character is a number");
	}
	return 0;
}
