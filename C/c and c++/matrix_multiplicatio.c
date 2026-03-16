#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],b[10][10],c[10][10],i,j,k,t;
	printf("Enter rows and coloumn");
	scanf("%d%d",&k,&t);
	printf("\nEnter the frist matrix\n");
	
	
	for(i=0;i<k;i++)
	{
		for(j=0;j<t;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter the second matrix\n");
	for(i=0;i<k;i++)
	{
		for(j=0;j<t;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<k;i++)
	{
		for(j=0;j<t;j++)
		{
		c[i][j]	=a[i][j]*b[i][j];
		}
	}
	for(i=0;i<k;i++)
	{
		for(j=0;j<t;j++)
		{
			printf("\nc[%d][%d]=%d\n",i,j,c[i][j]);
		
		}
}
}
