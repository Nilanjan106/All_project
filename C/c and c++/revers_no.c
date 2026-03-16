#include<stdio.h>
#include<conio.h>
void main()
{
	int x,r=0,d,n;
	printf("\n Enter the value of x");
	scanf("%d",&n);
	while(n!=0)
	{
		d=n%10;
		r=10*r+d;
		n=n/10;
	}
	printf("\n Reverse no of is %d",r);
	getch();
}
