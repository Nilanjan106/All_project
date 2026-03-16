#include<stdio.h>
#include<conio.h>
int front=-1;
int rear=-1;
int CQ[100];
int MaxSize;
int Item;
void Display()
{
	printf("\n.......Items are.......\n");
	printf("\nFront:%d\n",front);
	if(front<=rear)
	{
		for(int i=front;i<=rear;i++)
		{
			printf("%4d",CQ[i]);
		}
	}
	else
	{
		for(int i=rear;rear<=front;i++)
		{
			printf("%4d",CQ[i]);
		}
	}
}
void Delete()
{
	if(front==rear)
	{
		front=-1;
		rear=-1;
		printf("\nUnderflow.. Please Insert Some Data...\n");
	}
	else
	{
		printf("Deleted Item is:%d",CQ[front]);
		front++;
	}
}
void Insert()
{
	if((front==0&&rear==MaxSize-1)||(front==rear+1))
	{
		printf("\nCircular Queue Overflow.. Please Delete Some Data....\n");
	}
	if(front==-1)
	{
		front=0;
		rear=0;
		CQ[rear]=Item;
	}
	else
	{
		if(rear==MaxSize-1)
		{
			rear=0;
			
		}
		else
		{
			rear++;
			CQ[rear]=Item;
		}
	}
}
int main()
{
	printf("\nEnter Maximum size of Circular Queue:\n");
	scanf("%d",&MaxSize);
	int Dec=1;
	while(Dec)
	{
		printf("\n.........Please choose your option.........\n");
		printf("1.Insert 2.Delete 3.Dispaly 4.Exit\n");
		int Choice;
		printf("Enter your choice:");
		scanf("%d",&Choice);
		switch(Choice)
		{
			case 1:
				printf("\nEnter Item to insert:\n");
				scanf("%d",&Item);
				Insert();
				break;
			case 2:
				Delete();
				break;
			case 3:
				Display();
				break;
			case 4:
				Dec=0;
				break;
		}
	}
	
return 0;	
}
