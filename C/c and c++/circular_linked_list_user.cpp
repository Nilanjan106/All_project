#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<string.h>
void InsertAtAnyPosition();
struct Employee
{
	int E_ID;
	char E_Name[100];
	struct Employee *next;
}*Start,*End;
void Createlist()
{
	struct Employee *q,*temp;
	Start=NULL;
	q=(Employee *)malloc(sizeof(Employee));
	
	printf("Enter the Employee ID:");
	scanf("%d",&q->E_ID);
	
	printf("Enter Employee Name:");
	scanf("%s",q->E_Name);
	
	q->next=NULL;
	if(Start==NULL)
	{
		Start=q;
	}
	else
	{
		temp->next=q;
		temp=q;
	}
	temp->next=Start;
}
void InsertAtFirstPosition()
{
	Employee *p;
	struct Employee *temp=(Employee *)malloc(sizeof(Employee));
	
	printf("Enter the Employee ID:");
	scanf("%d",&temp->E_ID);
	
	
	printf("Enter Employee Name:");
	scanf("%s",temp->E_Name);
	
	p->next=NULL;
	if(End==NULL)
	{
		End=p;
		End->next=p;
	}
	else
	{
		p->next=End->next;
		End->next=p;
	}
}
void InsertAtLastPosition()
{
	Employee *p;
	struct Employee *temp=(Employee *)malloc(sizeof(Employee));
	
	printf("Enter the Employee ID:");
	scanf("%d",&temp->E_ID);
	
	
	printf("Enter Employee Name:");
	scanf("%s",temp->E_Name);
	
	p->next=NULL;
	if(End==NULL)
	{
		End=p;
		End->next=p;
	}
	else
	{
		p->next=End->next;
		End->next=p;
		End=p;
	}
	
}
void Display()
{
	struct Employee *r=Start;
	while(r->next!=Start)
	{
		printf("[Employee Id:%d Employee Name:%s]\n",r->E_ID,r->E_Name);
		r=r->next;
	}
}
int main()
{
	int Dec=1;
	while(Dec)
	{
		int choice;
		printf("Enter Choice:\n1.Create List\n2.Display List\n3.Insert Data at first position\n4.Insert Data at last position\n5.Insert data at any position\n");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:
			Createlist();
			break;
		case 2:
			Display();
			break;
		case 3:
			InsertAtFirstPosition();
			break;
		case 4:
			InsertAtLastPosition();
			break;
		/*case 5:
			InsertAtAnyPosition();
			break;*/
		case 6:
			Dec=0;
			break;
		}
    }
}
