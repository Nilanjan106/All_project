#include<stdio.h>
#include<conio.h>
struct node
{
	int data;
	struct node *next;
}
struct *front;
struct *rear;
void insert();
void delete();
void display();
int main()
{
	int choice;
	do
	{
		printf("\n-----Main Menu-----");
		printf("\n1.Insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");
		printf("\nEnter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				void insert();
				break;
			case 2;
				void delete();
				break;
			case 3:
				void display();
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("\nEnter the choice");
		}
	}
	while(choice!=4)
	return 0;
}
void insert()
{
	
}
