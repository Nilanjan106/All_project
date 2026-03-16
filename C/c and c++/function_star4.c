#include<stdio.h>
int star(int n);
int main()
{
	int n,i,j,s;
	printf("\nEnter the number of rows:");
	scanf("%d",&n);
	s=star(n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=n-1;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
int star(int n)
{
	return 0;
}
