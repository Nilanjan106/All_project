#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct BankBalance
{
	int Salary;
	char Name[100];
	struct BankBalance *next;
}*Start;
void List()
{
	struct BankBalance *temp,*q;
	temp=(BankBalance *)malloc(sizeof(BankBalance));
	
	printf("Enter the Employee Salary:");
	scanf("%d",&temp->Salary);
	
	
	printf("Enter Employee Name:");
	scanf("%s",temp->Name);
	
	temp->next=NULL;
	
	if(Start==NULL)
	{
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
void InsertAtFirst()
{
	int Salary;
	char Name[100];
	struct BankBalance *next;
	
	struct BankBalance **p;
	int FinalSalary;
	char FinalName[100];
	struct BankBalance *t =(BankBalance *)malloc(sizeof(BankBalance));
	t->Salary=FinalSalary;
	strcpy(t->Name,FinalName);
	t->next= *p;
	*p=t;
}

void Display()
{
	struct BankBalance *node;
	struct BankBalance *next;
	while(next!=NULL)
	{
		printf("[Employee Id:%d Employee Name:%s]\n",node->Salary,node->Name);
		node=node->next;
	}
}
int main()
{
	int Dec=1;
	while(Dec)
	{
		int choice;
		printf("Enter Choice:\n1.Create List\n2.Display List\n3.Insert Data at first position\n");
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
			Dec=0;
			break;
		}
    }
}
