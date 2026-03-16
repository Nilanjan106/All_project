#include<stdio.h>
#include<conio.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head;
void beginsert();
void lastinsert();
void randominsert();
void begindelete();
void lastdelete();
void randomdelete();
void display();
void search();
int main()
{
	int choice=0;
	while(choice!=7)
	{
		printf("\n-------Main Menu-------\n");
		printf("\nChoose one option from following list.....");
		printf("\n1.insert at begining\n2. insert at last\n3.delete from begining\n4.delete from last\n5.Serach for an element\n6.Show\n7.Exit\n");
		printf("Enter your choice\n");
		scanf("\n%d",&choice);
		switch(choice)
		{
			case:
				beginsert();
				break;
			case:
				lastinsert();
				break;
			case:
				randominsert();
				break;
			case:
				begindelete();
				break;
			case:
				lastdelete();
				break;
			case:
				randomdelete();
				break;
			case:
				display();
				break;
			case:
				search();
				break;
			case:
				exit(0);
				break;
			default
			printf("Please enter vaild");	
		}
	}
}
void beginsert()
{
	struct node *ptr,*temp;
	int item;
	ptr=(struct node*)malloc(sizeof(struct node));
	if(ptr==NULL)
	{
		
	}
}
