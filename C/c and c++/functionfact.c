#include<stdio.h>
int fact(int n);
int main()
{
	int n,i,factorial;
	printf("\nEnter number which you want:  \n");
	scanf("%d",&n);
	factorial=fact(n);
	printf("\nFactorial of the given number:%d \n",factorial);
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
		return n*fact(n-1);
	}
}
