#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,x,y,t,gcd,lcm;
	printf("\n Enter tow numbers\n");
	scanf("%d%d",&x,&y);
	a=x;
	b=y;
	while(b!=0);
	{
		t=b;
		b=a%b;
		a=t;
	}
	gcd=a;
	lcm=(x*y)/gcd;
	printf("\n GCD of %d and %d=%d",x,y,gcd);
	printf("\n LCM of %d and %d=%d\n",x,y,lcm);
	getch();
}
