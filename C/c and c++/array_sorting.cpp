#include<stdio.h>
int Arr[20];//Global
int Size;
void Input()
{
	printf("Enter Size of Array:");
	scanf("%d",&Size);
	for(int i=0;i<Size;i++)
	{
		printf("Enter Array elements for psition %d:",i+1);
		scanf("%d",&Arr[i]);
	}
}
void Print()
{
    for(int i=0;i<Size;i++)
	{	
		printf("%4d",Arr[i]);
	}	
}
void InsertAtFirstPosition()
{
	printf("\nEnter the data to enter at First position:");
	int data;
	scanf("%d",&data);
	//Insert Code
	for(int i=Size-1;i>=0;i--)
	{
		Arr[i+1]=Arr[i];
	}
	Arr[0]=data;
	Size++;
}
void InsertAtLastPosition()
{
	printf("\nEnter the data to enter at last position:");
	int data;
	scanf("%d",&data);
	Arr[Size]=data;
	Size++;
}
int main()
{
	//Switch Case
	//Insert At Any Position
	Input();
	InsertAtLastPosition();
	Print();
	InsertAtFirstPosition();
	Print();
	return 0;
}
