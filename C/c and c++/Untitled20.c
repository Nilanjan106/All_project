#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n,c=1;
	printf("\n Enter your intiger positive number\n");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			for(j=2;j<=i/2;j++)
			{
				if(i%j==0)
				{
					c=0;
					break;
				}
			}
			if(c==1)
			printf("\n %d is prime factor number\n");
		}
	}
	return 0;
	}
