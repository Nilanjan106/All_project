#include<stdio.h>
int fact(int n);
int main()
{
	int n,k;
	printf("\nEnter number what you want:\n");
	scanf("%d",&n);
	k=fact(n);
	printf("\nFactorial number of given number:%d\n",k);
	return 0;
}
int fact(int n)
{
	int i;
	if(n%i==0)
	{
		return 1;
	}
	else
	{
	    return (n*fact(n-1));
	}
}
