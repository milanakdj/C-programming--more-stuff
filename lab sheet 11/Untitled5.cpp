#include<stdio.h>
int main()
{
	int a[5],n,m,temp;
	printf("enter the age of 5 students\n");
	while(n<5)
	{
		scanf("%d",&a[n]);
		n++;
	}
	n=0;	
	while(n<5)
	{
		
		while(m<5)
		{
			if(a[n]>a[m])
			{
				temp=a[n];
				a[n]=a[m];
				a[m]=temp;
			}
			m++;
		}	
		n++;
	}
	n=0;
	printf("the second lowest score is %d",a[1]);
	
	return 0;
}
