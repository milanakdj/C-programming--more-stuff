#include<stdio.h>
#include<conio.h>
#include<process.h>

struct stde
{
	int id;
	int per;	
};

int main()
{
	struct stde oo;
	FILE *fp,*fp2;
	fp=fopen("THIS.dat","wb");
	int i=0;
	for(i=0;i<5;i++)
	{
		printf("enter the studentSs id and percentage \n");
		scanf("%d%d",&oo.id,&oo.per);
		fwrite(&oo,sizeof(oo),1,fp);
	}
	fclose(fp);
	
	printf("the student details are as follows \n");
	fp=fopen("THIS.dat","rb");
	fp2=fopen("THAT.dat","wb");
	
	if(fp2==NULL)
	{
		printf("file failed to open \n");
		getch();
		exit(0);
	}
	
	fread(&oo,sizeof(oo),1,fp);
	while(!feof(fp))
	{
		
		if(oo.per>=40)
		{
			fwrite(&oo,sizeof(oo),1,fp2);
		}
		fread(&oo,sizeof(oo),1,fp);
		i++;
		
	}
	
	
	fclose(fp);
	fclose(fp2);
	
	
	fp2=fopen("THAT.dat","rb");
	i=0;
	fread(&oo,sizeof(oo),1,fp2);
	while(!feof(fp2))
	{
		printf("the student %d id and percentage are %d %d\n",i,oo.id,oo.per);
		fread(&oo,sizeof(oo),1,fp2);
		i++;
		
	}
	fclose(fp2);
	
	return 0;
}
