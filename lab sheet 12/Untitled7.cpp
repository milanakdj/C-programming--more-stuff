#include<stdio.h>
#include<conio.h>
#include<alloc.h>

int main()
{
	clrscr();
	int *pp,n=10,i,j,*qq;
	pp=(int *)malloc(n*sizeof(int));
	qq=(int *)calloc(10,sizeof(int));
	n=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",(pp+i));
	}
	for(i=0;i<10;i++)
	{
		scanf("%d",(qq+i));
	}
	printf("this is loops");
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(*(pp+i)<*(pp+j))
			{
				n=*(pp+i);
				*(pp+i)=*(pp+j);
				*(pp+j)=n;
					}
		}
	}
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(*(qq+i)<*(qq+j))
			{
				n=*(qq+i);
				*(qq+i)=*(qq+j);
				*(qq+j)=n;
					}
		}
	}

	printf("this is the lops");
	for(i=0;i<10;i++)
	{
		printf("%d\n",*(pp+i));

	}
	free(pp);
	for(i=0;i<10;i++)
	{
		printf("%d\n",*(qq+i));

	}
	free(qq);
	return 0;

}
