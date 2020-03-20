int main()
{
	
	char a[40];
	char *p;
	
	char b[40];
	char *q;
	q=&b;
	
	printf("enter a line of text or a word \n");
	gets(a);
	
	int i=0;
	
	p = &a;
	
	while (*p !='\0')
	{
		printf("%c",*p);
		p++;
	}
	
	p = &a;

//	for(i=strlen(a);i>0;i--)

	while (*p !='\0')
	{
		strcpy(q,p);
		p++;
		q++;
	}
	printf("yoyoy");
	
//	for (i=strlen(a);i>0;i--)
//	{
//		printf("%c",*q);
//		q++;
//	}
	
	q=&b;


	while(*q !='\0')
	{
		printf("%c",*q);
		q++;
		
	}
	printf("yoyoy");
