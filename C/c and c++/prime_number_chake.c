#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,c=0;
	printf("\n enter the value\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	if((n%i)==0)
		{
			c++;
		}
	}
	if(c==0)
	{
		printf("\n given number is prime");
		
	}
	else
	{
		printf("\n given number is not prime");
	}
	return 0;
}
