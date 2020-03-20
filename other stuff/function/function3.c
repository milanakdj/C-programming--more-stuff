#include<stdio.h>
#include<ctype.h>
#include<conio.h>

#include<math.h>
#define PI 3.1415


void aandp(float l, float b)
{
	printf("the area and the perimeter of the rectangle is %f and %f \n",l*b,(l+b)*2);
	
}

void aandp2(float l, float b)
{
	printf("the area of the triangle is %f  \n",l*b*0.5);
	
}

void aandp3(float l, float b, float c)
{
	float s=(l+b+c)/2;
	printf("the area of the triangle is %f  \n",sqrt(s*(s-l)*(s*b)*(s-c)));
	
}

void swap(char a, char b)
{ 
	char c=a;
	a=b;
	b=c;
	printf("%c",b);
	printf("the swapped position of the entered character is %c and %c \n",a,b);
}

void rem(int a, int b)
{
	
	printf("the remainder is %d  \n",a %b);
	
}

void three(int a)
{
	int i=0;
	for(i=1;i<=3;i++)
	{
		printf("%d \n",a%10);
		a=a/10;
		
	}
}

void fiver(int a)
{
	int i=0,r=0;
	for(i=1;i<=5;i++)
	{
		r=r*10+a%10;
		a=a/10;
		
	}
	printf("the reverse of the entered number is %d",r);
}



int main()
{
	float l=0,b=0,x,y,z,l1,b1;
	char o='0',p='0';
	int n1=0, n2=0,aa=0,ff=0;

	printf("enter the length and the bredth of the rectangle \n");
	scanf("%f%f",&l,&b);
	aandp(l,b);
		
	printf("enter the height and the bredth of the triangle \n");
	scanf("%f%f",&l1,&b1);
	aandp2(l1,b1);
	
	printf("enter the three sides of the triangle \n");
	scanf("%f%f%f",&x,&y,&z);
	aandp3(x,y,z);
	

	printf("enter the first character: ");
	scanf(" %c",&o);
	printf("enter the second character: ");
	scanf(" %c",&p);
	swap(o,p);
	
	
	printf("enter the first number \n");
	scanf("%d",&n1);
	printf("enter the second number \n");
	scanf("%d",&n2);
	rem(n1,n2);
	
	printf("enter a three digit number \n");
	scanf("%d",&aa);
	three(aa);
	printf("enter a five digit number \n");
	scanf("%d",&ff);
	fiver(ff);
	
	
	return 0;
}
