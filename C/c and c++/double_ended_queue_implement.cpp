#include<stdio.h>
#include<conio.h>
int queue[100];
int front=-1;
int rear=-1;
int MaxSize;
int item;
void dqinsertrear()
{
	if(rear==MaxSize-1)
	{
		printf("Queue is full\n");
	}
	else
	{
		printf("Enter the value in end: \n");
		scanf("%d",&item);
		rear++;
		queue[rear]=item;
	}
}
void dpdeletefront()
{
	if(front==rear)
	{
		printf("Queue is empty\n");
	}
	else
	{
		front++;
		item=queue[front];
		printf("Element delete is=%d\n",item);
	}
}
void dqinsertfront()
{
	if(front==-1)
	{
		printf("Queue is full\n");
	}
	else
	{
		printf("Enter value in beginning: \n");
		scanf("%d",&item);
		queue[front]=item;
		front--;
	}
}
void dqdeleterear()
{
	if(front==rear)
	{
		printf("Queue is empty\n");
	}
	else
	{
		rear--;
		item=queue[item];
		printf("Element deleted is=%d",item);
	}
}
void dqdisplay()
{
	if(front<=rear)
	{
		printf("The element of queue\n");
		for(int i=front+1;i<=rear;i++)
		{
			printf("%4d",queue[i]);
		}
    }
	else
		{
			printf("Queue is empty\n");
		}
}
int main()
{
	int Choice;
	printf("Enter the size of  queue: \n");
	scanf("%d",&MaxSize);
	printf("1)Insert in the end\n");
	printf("2)Delete from the beginning\n");
	printf("3)Insert in the beginning\n");
	printf("4)Delete from the end\n");
	printf("5)Display\n6)Exit\n\t");
	do
	{
		printf("\nEnter the choice:\n");
		scanf("%d",&Choice);
		switch(Choice)
		{
			case 1:
				dqinsertrear();
				break;
			case 2:
				dpdeletefront();
				break;
			case 3:
				dqinsertfront();
				break;
			case 4:
				dqdeleterear();
				break;
			case 5:
				dqdisplay();
				break;
			case 6:
				printf("\nExit Point\n");
				break;
			default:
				printf("\nPlease enter a valid choice(1/2/3/4/5/6)\n");
		}
	}
	while(Choice!=6);
	return 0;
}
