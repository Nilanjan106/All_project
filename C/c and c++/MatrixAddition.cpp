#include<stdio.h>
int main()
{
	//Matrix 1
	printf("\n......Matrix1 input.......\n");
	int Mat1[3][3];
	//input from user
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("Enter value for [%d,%d] position:",i+1,j+1);
			scanf("%d",&Mat1[i][j]);
		}
	}
	//Matrix 2
	printf("\n......Matrix2 input.......\n");
	int Mat2[3][3];
	//input from user
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("Enter value for [%d,%d] position:",i+1,j+1);
			scanf("%d",&Mat2[i][j]);
		}
	}
	//print Matrix 1
	printf("\n........Matrix 1..........\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%4d",Mat1[i][j]);
		}
		printf("\n");
	}
	//print Matrix 2
	printf("\n........Matrix 2..........\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%4d",Mat2[i][j]);
		}
		printf("\n");
	}
	//matrix 3
	int Mat3[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		    Mat3[i][j]=	Mat1[i][j]+Mat2[i][j];
		}
	}
	//print Matrix 3
	printf("\n........Sum of two Matrix ..........\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%4d",Mat3[i][j]);
		}
		printf("\n");
	}
	return 0;
}
