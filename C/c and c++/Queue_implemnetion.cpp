#include<stdio.h>
#include<conio.h>
int Queue[100];
int MaxSize;
int Rear=-1;
int Front=-1;
void Insert()
{
	int Item;
	if(Rear==MaxSize-1)
	{
		printf("Queue overflow\n");
	}
	else
	{
		if(Front>=-1)
		{
			Front=0;
			printf("Insert the element in queue: ");
			scanf("%d",&Item);
			Rear=Rear+1;
			Queue[Rear]=Item;
		}
		else
		{
			printf("Cannot inserted");
		}
	}
}
void Delete()
{
	if(Front==-1||Front>Rear)
	{
		printf("Queue Underflow\n");
	}
	else
	{
		printf("Element delete from queue is:%d\n",Queue);
		Front=Front+1;
	}
}
void Display()
{
	if(Front==-1)
	{
		printf("Queue is empty\n");
	}
	else
	{
		printf("Queue is:\n");
		for(int i=Front;i<=Rear;i++)
		{
			printf("\n%d\n",Queue[i]);
		}
	}
}
int main()
{
	int Choice;
	printf("\nEnter the size of queue:\n");
	scanf("%d",&MaxSize);
	do
	{
	printf("\n\t1)Insert\n\t2)Delete\n\t3)Display\n\t4)Exit\n\t");
	
		printf("Enter the choice:\n");
		scanf("%d",&Choice);
		switch(Choice)
		{
			case 1:
				Insert();
				break;
			case 2:
				Delete();
				break;
			case 3:
				Display();
				break;
			case 4:
				printf("\nExit point\n");
				break;
			default:
				printf("\nPlease enter a valid choice(1/2/3/4)\n");	
		}
	}
	while(Choice!=4);
	return 0;
}
