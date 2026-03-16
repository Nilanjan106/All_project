#include<stdio.h>
#include<conio.h>
void main()
{
	int fibo(int);
	int a,b,n;
	printf("\n how mqany number you want\n");
	scanf("%d",&n);
	printf("\n enter value of a and b\n");
	scanf("%d%d",&a,&b);
	fibo(n);
	getch();
}
int fibo(int n);
int c;
{
	if(n<=0)
	return 0;
	else
	{
		c= fibo(n-1)+fibo(n-2);
		printf("\n fibo serise =%d",c);
		return c;
	}
}
