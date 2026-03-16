#include<stdio.h>
#include<conio.h>
void main()
{
	int m,n,i,j,k,sum=0;
	int a[3][3],b[3][3],result[3][3];
	printf("\n Enter the your number first matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter the %d%d element of first matrix\n",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Enter the your number second matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter %d%d elements of second matrix\n",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3<i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<4;k++)
			{
				sum=a[i][k]+b[k][j];
			}
			result[i][j]=sum;
			sum=0;
		}
	}
	getch();
}
