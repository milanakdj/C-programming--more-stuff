#include<stdio.h>

struct stde
{
	int id;
	int per;	
};

int main()
{
	struct stde oo;
	FILE *fp;
	fp=fopen("THISS.dat","wb");
	int i=0;
	for(i=0;i<5;i++)
	{
		printf("enter the students id and percentage \n");
		scanf("%d%d",&oo.id,&oo.per);
		fwrite(&oo,sizeof(oo),1,fp);
			}
	fclose(fp);
	
	printf("the student details are as follows \n");
	
	fp=fopen("THISS.dat","rb");
	i=0;
	fread(&oo,sizeof(oo),1,fp);

	while(!feof(fp))
	{
		printf("the student id and percentage are %d %d\n",oo.id,oo.per);
		fread(&oo,sizeof(oo),1,fp);

		i++;
		
	}
	fclose(fp);
	return 0;
}
