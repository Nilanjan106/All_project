#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[10],*p;
	int i,n=0;
	printf("\n enter string\n");
	gets(a);
	p=a;
	while(*p!='\0')
	{
		n++;
		p++;
	}
	printf("\n length of string =%d",n);
	getch();
}
