#include<stdio.h>
#include<conio.h>
void main()
{
	int n,p,r,s=0;
	printf("\n Enter any number: \n");
	scanf("%d",&n);
	r=n;
	if(n!=0)
	{
		p=n%10;
		s=s+p;
		n=n/10;
	}
	printf("\n Sum of %d is=%d
	",r,s);
	getch();
}
