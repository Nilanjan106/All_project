#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<string.h>
struct Student
{
	int ID;
	char Name[100];
	struct Student *next;
}*Start;
int main()
{
	Student *ptr3=(Student *)malloc(sizeof(Student));
	ptr3->ID=103;
	strcpy(ptr3->Name,"Eeshani");
	ptr3->next=NULL;
	
	Student *ptr2=(Student *)malloc(sizeof(Student));
	ptr2->ID=102;
	strcpy(ptr2->Name,"Sudip");
	ptr2->next=ptr3;
	
	Student *ptr1=(Student *)malloc(sizeof(Student));
	ptr1->ID=101;
	strcpy(ptr1->Name,"Anupam");
	ptr1->next=ptr2;

	Start=ptr1;
	struct Student *q=NULL;
	q=Start;
	while(q!=NULL)
	{
		printf("[ID:%d,Name:%s]\n",q->ID,q->Name);
		q=q->next;
	}
	return 0;
}
