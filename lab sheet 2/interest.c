
#include <stdio.h>
#include <conio.h>

int main ()
{
	int p=0,r=0,t=0;
	printf("enter principal, rate and time : \n");
	scanf("%d%d%d",&p,&r,&t);
	float interest = (p*t*r)/100 ;
	printf("the interest for the entered data is %f",interest);
	return 0;
	getch();	
}


