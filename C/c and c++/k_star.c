#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	printf("\nEnter number\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==1&&j==1)
			{
				printf("k");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
	getch();
}
