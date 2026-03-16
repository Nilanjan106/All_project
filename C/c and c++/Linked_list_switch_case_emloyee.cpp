#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<string.h>
struct Employee
{
	int E_ID;
	char E_Name[100];
	float E_Salary;
	struct Employee *next;
}*Start;
void Display()
{
	struct Employee *p=NULL;
	p=Start;
	if(p==NULL)
	{
		printf("List is Empty...\n");
	}
	else
	{
		while(p!=NULL)
		{	
		  printf("[ID:%d Name:%s Salary:%f]\n",p->E_ID,p->E_Name,p->E_Salary);
		  p=p->next;
		}
	}
}
void List()
{
	struct Employee *temp,*p;
	temp=(Employee *)malloc(sizeof(Employee));
	
	printf("Enter the Employee ID:");
	scanf("%d",&temp->E_ID);
	
	
	printf("Enter Employee Name:");
	scanf("%s",temp->E_Name);
	

	
	printf("Enter Employee Salary: ");
	scanf("%f",&temp->E_Salary);
	temp->next=NULL;
	
	if(Start==NULL)
	{
		Start=temp;
	/*	Start=temp;
		*/
	}
	else
	{
		p=Start;
		while(p->next!=NULL)
		{
			p=p->next;
		}
		p->next=temp;
	}
}
int main()
{
	int Dec=1;
	while(Dec)
	{
		int choice;
		printf("Enter Choice:\n1.Create List\n2.Display List\n");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:
			List();
			break;
		case 2:
			Dispay();
			break;
		case 3:
			Dec=0;
			break;
		}
	}
	return 0;
}
