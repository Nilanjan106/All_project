#include<stdio.h>
#include<conio.h>
int queue[100];
int front=-1;
int rear=-1;
int MaxSize;
int item;
//void delete();
void display();
void insert()
{
	if((front==0 && rear==MaxSize-1) || (front==rear+1))
	{
		printf("Queue is been overflow\n");
	}
	else if(front==rear)
	{
		front=-1;
		rear=-1;
	//	printf("Queue is been underflow\n");
	}
	else if(front==-1)
	{
		front=0;
		rear=0;
		//printf("Enter the value in queue: \n");
	}
	else
	{
		if(rear=MaxSize-1)
		{
			rear=0;
		}
		else
		{
			rear++;
			queue[rear]=item;
		}
	}	
}
int main()
{
	/*int Choice;
	printf("Enter the size of  queue: \n");
	scanf("%d",&MaxSize);
	printf("1)Insert\n");
	printf("2)Delete\n");
	printf("3)Display\n4)Exit\n\t");
	do
	{
		printf("\nEnter the choice:\n");
		scanf("%d",&Choice);
		switch(Choice)
		{
			case 1:
				insert();
				break;
			case 2:
				delete();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("\nExit Point\n");
				break;
			default:
				printf("\nPlease enter a valid choice(1/2/3/4)\n");
		}
	}
	while(Choice!=4);
	return 0;*/
} 
