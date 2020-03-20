// to do todays thing about the file in this program

#include<stdio.h>

int main()

{
	FILE *fp;
	fp=fopen("AAA.txt","w");
	printf("enter a line of text : ");
	char a;
	while ((a=getchar())!='\n')
	{
		putc(a,fp);
	}
	printf("the total number of character is %ld",ftell(fp)); 
	fclose(fp);
	printf("\n");
	
	fp=fopen("AAA.txt","r");
	fseek(fp,-1l,2);
	do 
	{
		a=getc(fp);
		printf("%c",a);
		
	}while(fseek(fp,-2l,1)==0);
	
	fclose(fp);
	return 0;
}
