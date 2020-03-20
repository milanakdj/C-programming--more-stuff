
#include <stdio.h>
#include <conio.h>

int main ()
{
	float c=0,f=0;
	printf("enter the temperature in degree celcius: \n");
	scanf("%f",&c);
	
	f = (9 /5 )* c +32;
	
	printf("the conversion of %f degree celcius to fahernheit is %f",c,f);
	return 0;
	getch();	
}


