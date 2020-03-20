// to get info of 5 students and print them

// to do todays thing about the file in this program

#include<stdio.h>

int main()

{
	FILE *fp;
	fp=fopen("AAAA.txt","w");
	int i=0,age;
	char a[40];
	for (i=0;i<5;i++)
	{
	printf("enter student name : ");
	scanf("%s",a);
	printf("\n enter student age : ");
	scanf("%d",&age);
	fprintf(fp,"%s\n%d\n",a,age);
	
	}
	fclose(fp);
	
	printf("\n");
	
	fp=fopen("AAAA.txt","r");
	
	while((feof(fp))!=1)
	{
		fscanf(fp,"%[^\n]%d",a,&age);
		printf("name : %s \n age : %d\n",a,age);
	}
	
	fclose(fp);
	return 0;
}
