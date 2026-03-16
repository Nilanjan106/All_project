#include<stdio.h>
int Array[100],Size,choice,i,position;
void Input()
{
	int i;
	printf("Enter Size of Array: \n");
	scanf("%d",&Size);
	for(i=0;i<Size;i++)
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
int main() {
	Input();
	InsertAtLastPosition();
	Print();
	return 0;
	}

