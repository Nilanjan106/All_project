#include<stdio.h>
#include<conio.h>
void main()
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
	if(c==2)
	{
		printF("\n given number is prime");
		
	}
	else
	{
		printf("\n given number is not prime");
	}
	getch();
}
