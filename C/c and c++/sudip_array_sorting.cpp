#include<stdio.h>
#include<conio.h>
int arr[20];
int size,position;
int i;
void input()
{
	printf("Enter the size of array\n");
	scanf("%d",&size);
	printf("Enter your data");
	for(int i=0;i<size;i++)
	{ 
	printf("Enter your data for position %d :",i+1);
	scanf("%d",&arr[i]);
	}
}
void print()
{
	for(int i=0;i<size;i++)
	{
		printf("%4d",arr[i]);
	}
}
void InsertAtFirstPosition()
{
	printf("Enter the data for the first position :");
	int data,i;
	scanf("%d",&data);
	for(i=size-1;i>=0;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[0]=data;
	size++;
}
void InsertAtAnyPosition()
{
	printf("Enter data any position:\n");
	int data;
	scanf("%d",&data);
	int size;
	scanf("%d",&size);
	printf("Enter the position where you want to be inserted data:\n");
	scanf("%d",&position);
	for(int i=size;i>=position;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[i]=data;
	size++;
}
void InsertAtLastPosition()
{
	printf(" \n Enter the data for the last position :");
	int data,i;
	scanf("%d",&data);
	arr[size]=data;
	size++;
}
int main()
{
	input();
	//InsertAtFirstPosition();
	//print();
	InsertAtAnyPosition();
	print();
	return 0;
}
