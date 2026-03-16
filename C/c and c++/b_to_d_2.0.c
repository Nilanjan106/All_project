#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r,s=0,t=0,j;
	printf("\n Enter the number to convert: ");
	scanf("%d",&n);
	j=n;
	while(n>0)
	{
		j=n%10;
		s=s+j*t;
		n=n/10;
		t=t*2;
	}
	printf("\n Decimal of given number is %d ",s);
	getch();
}
