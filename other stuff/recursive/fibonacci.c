#include<stdio.h>

int fib(int n)
{
	if (n==1)
		return 1;
	else if (n==2)
		return 2;
	return fib(n-1)+fib(n-2);
}

int main()
{
	int n=0;
	printf("enter the value for n\n");
	scanf("%d",&n);
	int fibonacci=fib(n);
	printf("the required value is %d",fibonacci);
	
	return 0;
}

// name n times

// line of text and display in reverse


// line of text and display in reverse

//#include<stdio.h>
//#include<string.h>
//
//void reverse(char a[40],int n)
//	{
//		if (n==0)
//		{
//			printf("%c",a[0]);
//			printf("\n");
//			
//		}
//		
//		else
//		{
//		printf("%c",a[n]);
//		reverse(a,n-1);
//		}
//
//	}
//
//int main()
//{
//	char l[20];
//	printf("enter a whole line of text \n");
//	scanf("%[^\n]",l);
//	printf("%s",l);
//	printf("\n=============\n");
//	printf("the reverse of the entered line is \n");
//	reverse(l,strlen(l));
//	return 0;
//}
