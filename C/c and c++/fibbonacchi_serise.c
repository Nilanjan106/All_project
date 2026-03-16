#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a,b,c,i;
	a=0;
	b=1;
	printf("\n Enter the value of number \n");
	scanf("%D",&n);
	printf("\n Now Fibbonacchi serise is start\n");
	printf("%6d%6d",a,b);
	for(i=0;i<=n;i++)
	{
		c=a+b;
		printf("%6d",c);
		a=b;
		b=c;
	}
	getch();
}
