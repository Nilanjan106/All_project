#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	printf("\n enter the number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	n--;
	for(i=1;i<=n;i++)
	{
		for(j=2;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}
