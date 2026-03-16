#include<stdio.h>
int main()
{
	int n,i,j,s;
	printf("\nEnter the number of rows: ");
	scanf("%d",&n);
	s=star(n);
	for (i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
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
