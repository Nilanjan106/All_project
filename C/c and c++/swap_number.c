##include<stdio.h>
#include<conio.h>
void man()
{
	int a,b;
	printf("\n Enter any number a and b\n");
	scanf("%d%d",&a,&b);
	printf("\n Before swap a=%d\n b=%d\n",a,b);
	a=a+b;
	a=a-b;
	printf("\n After swap a=%d\n b=%d\n",a,b);
	getch();
}
