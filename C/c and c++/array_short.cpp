#include<stdio.h>
int Array[100],Size,choice,i,position;
void Input()
{
	printf("Enter Size of Array: \n");
	scanf("%d",&Size);
	for(int i=0;i<Size;i++)
	{
		printf("Enter Array elements for psition %d:",i+1);
		scanf("%d",&Array[i]);
	}
}
void Print()
{
	for(i=0;i<Size;i++)
	{
		printf("%4d",Array[i]);
	}
}
void InsertAtFirstPosition()
{
	printf("Enter data in first position:\n");
	int data;
	scanf("%d",&data);
	for(i=Size-1;i>=0;i--)
	{
		Array[i+1]=Array[i];
	}
	Array[0]=data;
	Size++;
}
void InsertAtLastPosition()
{
	printf("Enter data last position:\n");
	int data;
	scanf("%d",&data);
	Array[Size]=data;
	Size++;
}
void InsertAtAnyPosition()
{
	printf("Enter data any position:\n");
	int data;
	scanf("%d",&data);
	printf("Enter the position where you want to be inserted data:\n");
	scanf("%d",&position);
	for(i=Size;i>=position;i--)
	{
		Array[i]=Array[i-1];
	}
	Array[i]=data;
	Size++;
}
void DeleteElementAtFirstPosition()
{
	printf("Delete the first element\n");
	scanf("%d",&position);
	int data;
	scanf("%d",&data);
	for(i=position-1;i<=0;i++)
	{
		Array[i-1]=Array[i];
	}
	Array[i]=data;
	Size--;
}
void DeleteElementAtLastPosition()
{
	printf("Delete data last position:\n");
	int data;
	scanf("%d",&data);
	Array[i]=data;
	Size--;
}
void DeleteElementAtAnyPosition()
{
	printf("Enter the position where you want to be deleted data:\n");
	scanf("%d",&position);
	for(i=position-1;i<Size;i++)
	{
		Array[i]=Array[i+1];
	}
}
int main()
{
	Input();
//	InsertAtLastPosition();
//	Print();
//	InsertAtFirstPosition();
//	Print();
	InsertAtAnyPosition();
	Print();
//	DeleteElementAtAnyPosition();
//	Print();
//	DeleteElementAtFirstPosition();
//	Print();
//	DeleteElementAtLastPosition();
//	Print();
	return 0;
}
