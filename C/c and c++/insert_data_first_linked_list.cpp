#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<string.h>
struct Employee
{
	int E_ID;
	char E_Name[100];
	struct Employee *next;
}*Start;
void List()
{
	struct Employee *t,*q;
	t=(Employee *)malloc(sizeof(Employee));
	
	printf("Enter the Employee ID:");
	scanf("%d",&t->E_ID);
	
	
	printf("Enter Employee Name:");
	scanf("%s",t->E_Name);
	
	t->next=NULL;
	
	if(Start==NULL)
	{
		Start=t;
	}
	else
	{
		q=Start;
		while(q->next!=NULL)
		{
			q=q->next;
		}
		q->next=t;
	}
}
void InsertAtFirst()
{
	Employee *p=NULL;
	p=Start;
	struct Employee *temp=(Employee *)malloc(sizeof(Employee));
	
	printf("Enter the Employee ID:");
	scanf("%d",&temp->E_ID);
	
	
	printf("Enter Employee Name:");
	scanf("%s",temp->E_Name);
	/*temp->E_ID=111;
	strcpy(temp->E_Name,"XXX");*/
	temp->next=p;
	Start=temp;
	
	
}
void InsertAtLast()
{
	Employee *temp1=NULL;
	struct Employee *temp=(Employee *)malloc(sizeof(Employee));
	
	printf("Enter the Employee ID:");
	scanf("%d",&temp->E_ID);
	
	
	printf("Enter Employee Name:");
	scanf("%s",temp->E_Name);
	
	temp->next=NULL;
	temp1=Start;
	while(temp1->next!=NULL)
	{
		temp1=temp1->next;
	}
	temp1->next=temp;	
}
void InsertAtAnyPosition()
{
	int position,count=0,i;
	Employee *empCount=Start;
	while(empCount!=NULL)
	{
		count++;
		empCount=empCount->next;
	}
	printf("Count:%d\n",count);
	printf("Enter your position:");
	scanf("%d",&position);
	//hold the position
	Employee *emppos=Start;
	Employee *e=Start;
	while(e!=NULL)
	{
		printf("node address:%u\n",e->next);
		e=e->next;
	}
	if(position<=count)
	{
		for(int i=1;i<=position;i++)
		{
			emppos=emppos->next;
			printf("pos:%u  Id:%d\n",emppos->next,emppos->E_ID);
			printf("hello\n");
		}
	}
	else
	{
		printf("Invalid position");
	}
	//create new node
	Employee *newNode=(Employee *)malloc(sizeof(Employee));
	newNode->E_ID=1001;
	strcpy(newNode->E_Name,"XXXX");
	//newNode->next=NULL;
	newNode->next=emppos->next;
	
	//now address of new node set to previous node
	emppos->next=newNode->next;
	printf("\nLinked node:%u value:%d\n",emppos->next,emppos->E_ID);
	
/*	Employee *temp1=NULL,*newnode;
	printf("Enter the Position you want to insert data: \n");
	scanf("%d",&position);
	if(position>count)
	{
		printf("Invalid Position");
	}
	else
	{
		temp1=Start;
		while(i<position)
		{
			temp1=temp1->next;
			i++;
		}
	}
	struct Employee *temp=(Employee *)malloc(sizeof(Employee));
	printf("Enter the Employee ID:");
	scanf("%d",&temp->E_ID);
	
	
	printf("Enter Employee Name:");
	scanf("%s",temp->E_Name);
	
	newnode->next=temp1->next;
	temp1->next=newnode;*/
}
void Display()
{
	struct Employee *r=Start;
	while(r!=NULL)
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
			List();
			break;
		case 2:
			Display();
			break;
		case 3:
			InsertAtFirst();
			break;
		case 4:
			InsertAtLast();
			break;
		case 5:
			InsertAtAnyPosition();
			break;
		case 6:
			Dec=0;
			break;
		}
    }
}
