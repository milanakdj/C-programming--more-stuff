#include<stdio.h>
int main()
{
	int a[5],n,m,temp;
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
	while(n<5)
	{
		printf("%d\n",a[n]);
		n++;
	}
	
	return 0;
}
