#include<stdio.h>
// this is a program that is going to print the fibonacci series

int fib(int i)
{
	
	
	if (i==0)
		return 0;
	else if (i==1)
		return 1;
		
	return fib(i-1)+fib(i-2);
}


int main ()
{
	int n=0;
	printf("enter a number \n");
	scanf("%d",&n);
	int i=0;
	
	for(i=0;i<n;i++)
	{
		printf("%d \t",fib(i));
	}
	
	return 0;
}



//function for the factorial 
//
//int fact(int n)
//{
//	// if n is greater than or equal to 1 then we have n*(n-1)!;
//	// else n=0 then return 1; because we have to suppose that the number n is a positive integer
//	if (n>=1)
//		return n* fac(n-1);
//	else if (n=0)
//		return 1;
//		
//}
