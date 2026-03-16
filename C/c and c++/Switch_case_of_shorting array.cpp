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
void DeleteElementAtAnyPosition()
{
	printf("Enter the position where you want to be deleted data:\n");
	scanf("%d",&position);
	for(i=position-1;i<Size;i++)
	{
		Array[i]=Array[i+1];
	}
	Size--;
}
int main()
{
	printf("\n\t1)Enter the Input\n\t2)Insert Data At First Position\n\t3)Insert Data At last Position\n\t4)Insert Data At Any Position\n\t5)Delete Data At Any Position\n\t");
	do
	{
		printf("\n Enter the choice: \n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				Input();
				break;
			case 2:
				Print();
				break;
			case 3:
				InsertAtFirstPosition();
				break;
			case 4:
				InsertAtLastPosition();
				break;
			case 5:
				InsertAtAnyPosition();
				break;
			case 6:
				DeleteElementAtAnyPosition();
				break;
			case 7:
				Print();
				break;
			case 8:
				printf("\nExist point\n");
				break;
			default:
				{
					printf("\nPlease Enter a valid choice(1/2/3/4/5/6/7/8)\n");
				}
		}
	}
	while(choice!=10);
}
