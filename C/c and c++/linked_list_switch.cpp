#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<string.h>
struct Student
{
	int ID;
	char Name[20];
	struct Student *next;
}*Start;
void DisplayList()
{
	struct Student *q=NULL;
	q=Start;
	if(q==NULL)
	{
		printf("List is Empty...\n");
	}
	else
	{
		while(q!=NULL)
		{	
		  printf("[ID:%d Name:%s]\n",q->ID,q->Name);
		  q=q->next;
		}
	}
}
void CreateNewList()
{
	struct Student *temp,*q;
	temp=(Student*)malloc(sizeof(Student));
	int id;
	printf("Enter the ID:");
	scanf("%d",temp->ID);
	printf("Enter Name:");
	char name[20];
	scanf("%s",temp->Name);
	temp->next=NULL;
	
	if(Start==NULL)
	{
		//printf("List is Empty\n");
		Start=temp;
	}
	else
	{
		q=Start;
		while(q->next!=NULL)
		{
			q=q->next;
		}
		q->next=temp;
	}
}
int main()
{
	int Dec=1;
	while(Dec)
	{
		int choice;
		printf("Enter Choice:\n1.Create List 2.Display List\n");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:
			CreateNewList();
			break;
		case 2:
			DisplayList();
			break;
		case 3:
			Dec=0;
			break;
		}
	}
	return 0;
}
