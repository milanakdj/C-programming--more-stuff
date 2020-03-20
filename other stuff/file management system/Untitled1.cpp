#include<stdio.h>
#include<ctype.h>
int main()
{
	FILE *fp,*fp2,*fp3;
	fp=fopen("all.txt","w");
	char c;
	
	while((c=getchar())!='\n')
	{
		putc(c,fp);
	}
	
	fclose(fp);
	
	fp=fopen("all.txt","r");
	fp2=fopen("e.txt","w");
	fp3=fopen("o.txt","w");
	
	
	while((c=getc(fp))!=EOF)
	{
		if(isalpha(c))
		putc(c,fp2);
		else
		putc(c,fp3);
	}
	
	fclose(fp);fclose(fp2);fclose(fp3);
	
	fp2=fopen("e.txt","r");
	fp3=fopen("o.txt","r");
	
	
	while((c=getc(fp2))!=EOF)
	{
		putchar(c);
	}
	
	printf("\nThe non alphabet are as follows : \n");
	while((c=getc(fp3))!=EOF)
	{
		putchar(c);
	}
	
	fclose(fp2);fclose(fp3);
	
	
	return 0;
}
