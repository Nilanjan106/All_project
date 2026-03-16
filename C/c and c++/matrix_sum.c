#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],b[10][10],c[10][10],i,j;
	printf("\n Enter the 1st matrix ");
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			scanf("%d",a[i][j]);
		}
	}
	printf("\n Enter the 2nd matrix ");
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			scanf("%d",b[i][j]);
		}
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
	      c=[i][j]=a[i][j]+b[i][j];	
		}
	}
	printf("\n the sum of two matrix is ");
	for(i=0;i<10;i++)
	{
		printf("%d",c[i][j]);
	}
	printf("\n");
	getch();
}
