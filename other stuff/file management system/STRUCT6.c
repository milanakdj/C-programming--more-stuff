#include<stdio.h>
#include<conio.h>
#include<process.h>

struct std
{
	int id;
	int maths;int cmp;int c;	
};

int main()
{
	struct std oo;
	FILE *fp,*fp2;
	fp=fopen("TTTTHIS.dat","wb");
	int i=0;
	for(i=0;i<5;i++)
	{
		printf("enter the emp id, and maths and computer and c programming marks \n");
		scanf("%d%d%d%d",&oo.id,&oo.maths,&oo.cmp,&oo.c);
		fwrite(&oo,sizeof(oo),1,fp);
	}
	fclose(fp);
	
	printf("the student details are as follows \n");
	
	fp=fopen("TTTTHIS.dat","rb");
	fp2=fopen("TTTTHAT.dat","wb");
	
	if(fp2==NULL)
	{
		printf("file failed to open \n");
		getch();
		exit(0);
	}
	
	fread(&oo,sizeof(oo),1,fp);
	while(!feof(fp))
	{
		
		if((oo.c+oo.cmp+oo.maths)>=120)
		{
			fwrite(&oo,sizeof(oo),1,fp2);
		}
		fread(&oo,sizeof(oo),1,fp);
		i++;
		
	}
	
	
	fclose(fp);
	fclose(fp2);
	
	
	fp2=fopen("TTTTHAT.dat","rb");
	i=1;
	fread(&oo,sizeof(oo),1,fp2);
	while(!feof(fp2))
	{
		printf("the student %d id, maths, cmp, c are %d %d %d\n",i,oo.id,oo.maths,oo.cmp);
		fread(&oo,sizeof(oo),1,fp2);
		i++;
		
	}
	fclose(fp2);
	
	return 0;
}
