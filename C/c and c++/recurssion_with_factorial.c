#include<stdio.h>
#include<conio.h>
void main()
{
	int fact(int);
	int i,n,k;
	printf("\n Enter number\n");
	if(n>0)
	{
		k=fact(n);
		ptintf("\n k=%d\n",k);
	}
	else
	{
		printf("\n NOT POSSIABLE\n");
	}
	getch();
}
int fact(int n)
{
	if(n<=0)
	{
		return 1
	}
	else
	{
		return n*fact(n-1);
	}
}
