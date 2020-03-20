#include<stdio.h>
#include<conio.h>
#include<process.h>

struct emp
{
	int id;
	int salary;
	int per;	
};

int main()
{
	struct emp oo;
	FILE *fp,*fp2;
	fp=fopen("TTTHIS.dat","wb");
	int i=0;
	for(i=0;i<5;i++)
	{
		printf("enter the emp id,salary, and percentage \n");
		scanf("%d%d%d",&oo.id,&oo.salary,&oo.per);
		fwrite(&oo,sizeof(oo),1,fp);
	}
	fclose(fp);
	
	printf("the student details are as follows \n");
	
	fp=fopen("TTTHIS.dat","rb");
	fp2=fopen("TTTHAT.dat","wb");
	
	if(fp2==NULL)
	{
		printf("file failed to open \n");
		getch();
		exit(0);
	}
	
	fread(&oo,sizeof(oo),1,fp);
	while(!feof(fp))
	{
		
		if(oo.salary>=100000)
		{
			fwrite(&oo,sizeof(oo),1,fp2);
		}
		fread(&oo,sizeof(oo),1,fp);
		i++;
		
	}
	
	
	fclose(fp);
	fclose(fp2);
	
	
	fp2=fopen("TTTHAT.dat","rb");
	i=1;
	fread(&oo,sizeof(oo),1,fp2);
	while(!feof(fp2))
	{
		printf("the student %d id,salary, and percentage are %d %d %d\n",i,oo.id,oo.salary,oo.per);
		fread(&oo,sizeof(oo),1,fp2);
		i++;
		
	}
	fclose(fp2);
	
	return 0;
}
