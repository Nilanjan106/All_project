#include<stdio.h>
#include<conio.h>
void main()
{
	int n,p,r,m=1;
	printf("\n Enter any number: \n");
	wscanf("%d",&n);
	r=n;
	if(n!=0)
	{
		p=n%10;
		m=m*p;
		n=n/10;
	}
	printf("\n Product of %d is=%d",r,m);
	getch();
}
