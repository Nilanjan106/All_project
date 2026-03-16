#include<stdio.h>
int star(int n);
int main()
{
	int n,i,j,k,s;
	printf("\nEnter the number of rows:");
	scanf("%d",&n);
	s=star(n);
	return 0;
}
int star(int n)
{
	int i,j,k;
	for(i=1;i<=n;i++)
	{
		for(j=n;j>i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
