#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<string.h>
struct Computer
{
	char BrandName[20];
	char Processor[20];
	int Price;
	int Rom;
	int Ram;
	struct Computer *next;
}*Start;
void DisplayList()
{
	struct Computer *q=NULL;
	q=Start;
	if(q==NULL)
	{
		printf("List is empty...\n");
	}
	else
	{
		while(q!=NULL)
		{
			printf("[Brand Name=%s Processor=%s Price=%d  Rom=%d Ram=%d]\n",q->BrandName,q->Processor,q->Price,q->Rom,q->Ram);
			q=q->next;
		}
	}
}
void creatlist()
{
	struct Computer *temp,*q;
	temp=(Computer*)malloc(sizeof(Computer));
	//char BrandName[20];
	printf("Enter your computer name\n");
	scanf("%s",q->BrandName);
	//char Processor[20];
	printf("Enter your processor\n");
	scanf("%s",q->Processor);
	//int Price;
	printf("Enter your price\n");
	scanf("%d",&q->Price);
	//int Rom;
	printf("Enter your Rom\n");
	scanf("%d",&q->Rom);
	//int Ram;
	printf("Enter your Ram\n");
	scanf("%d",&q->Ram);
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
void  InsertAtFirstPosition()
{
	
	struct Computer *next,*newnode;
	newnode=(Computer*)malloc(sizeof(Computer));
	printf("Enter your computer name\n");
	scanf("%s",newnode->BrandName);
	
	printf("Enter your processor\n");
	scanf("%s",newnode->Processor);
	
	printf("Enter your price\n");
	scanf("%d",&newnode->Price);
	
	printf("Enter your Rom\n");
	scanf("%d",&newnode->Rom);
	
	printf("Enter your Ram\n");
	scanf("%d",&newnode->Ram);
	
	newnode->next=Start;
	Start=newnode;
   }
int main()
{
	int Dec=1;
	while(Dec)
	{
		int choice;
		printf("Enter your choice:\n 1.Creat List 2.Display List\n 3.InsertAtFirstPosition\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				creatlist();
			case 2:
				DisplayList();
				break;
			case 3:
				InsertAtFirstPosition();
				break;
			case 4:
				Dec=0;
				break;
		}
	}
return 0;
}
