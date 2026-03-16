#include<stdio.h>
#include<conio.h>
void main()
{
	int n,t=0,s,r;
	printf("\n Enter the binary number\n ");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		s=s+r*pow(2,t);
		t++;
	}
	printf("\n The Decimal number is %d",s);
	getch();
}
