#include <stdio.h>
#include <ctype.h>

int main()
{
	int v=0;
	char a;
	char c;
	
	printf("enter a character: \n");
	
	scanf("%c",&a);
	c=tolower(a);
	

		if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
		{
			v=1;
			printf("the entered character is a vowel.");
		}
		else
		{
			printf("error \n");
			v=0;
			while (v!=1)
			{
				printf("enter a new character: \n");
				scanf("%c",&a);
				c=tolower(a);				
				if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
					{
						v=1;
						printf("the entered character is a vowel.");
					}
			
			}
		}
	
	return 0;
}
