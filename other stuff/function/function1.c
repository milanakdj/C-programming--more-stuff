#include<stdio.h>
#include<ctype.h>
#include<conio.h>

void cprogram()
{
	printf("C programming is easy. \n");
	printf(" \n");

}
void collegeprogram()
{
	printf("Kantipur City College \n");
	printf("BCA. \n");
	printf(" \n");


}
void biodata()
{
	printf("Milan Shrestha \n");
	printf("Teku, Kathmandu \n");
	printf("milanakdj@gmail.com \n");
	printf(" 2000\n");
	printf(" Nepal \n");
	printf(" \n");
}

void sum(int a,int b)
{

	printf("the sum of the given number is %d",a+b);
	printf(" \n");

}
void product(int a,int b)
{

	printf("the sum of the product number is %d",a*b);
	printf(" \n");

}

int main()
{
	char a[40];
	cprogram();
	collegeprogram();
	biodata();
	sum(3,2);
	product(3,2);
	return 0;
}
