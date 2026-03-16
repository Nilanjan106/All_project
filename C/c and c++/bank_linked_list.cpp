#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<string.h>
struct Bank
{
	int Account_ID;
	char Accountant_Name[100];
	float Money;
	struct Bank *next;
	
}*Start;
int main()
{
	Bank *ptr3=(Bank *)malloc(sizeof(Bank));
	ptr3->Account_ID=10003;
	strcpy(ptr3->Accountant_Name,"Namrata Maity");
	ptr3->Money=3000000;
	ptr3->next=NULL;
	
	Bank *ptr2=(Bank *)malloc(sizeof(Bank));
	ptr2->Account_ID=10002;
	strcpy(ptr2->Accountant_Name,"Sudip Bhattacharya");
	ptr2->Money=2000000;
	ptr2->next=ptr3;
	
	Bank *ptr1=(Bank *)malloc(sizeof(Bank));
	ptr1->Account_ID=10001;
	strcpy(ptr1->Accountant_Name,"Anupam Rana");
	ptr1->Money=1000000;
	ptr1->next=ptr2;
	
	Start=ptr1;
	Bank *p=NULL;
	p=Start;
	while(p!=NULL)
	{
		printf("[Account ID:%d,Accountant Name:%s,Amount of Money:%f]\n",p->Account_ID,p->Accountant_Name,p->Money);
		p=p->next;
	}
	return 0;
}
