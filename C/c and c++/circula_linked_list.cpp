#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<string.h>
struct Student
{
	int Roll;
	char Name[100];
	struct Student *next;
}*Start;
int main()
{
	
	
	Student *ptr3=(Student *)malloc(sizeof(Student));
	ptr3->Roll=103;
	strcpy(ptr3->Name,"Namrata");
	ptr3->next=Start;
	
	Student *ptr2=(Student *)malloc(sizeof(Student));
	ptr2->Roll=102;
	strcpy(ptr2->Name,"Anupam");
	ptr2->next=ptr3;
	
	Student *ptr1=(Student *)malloc(sizeof(Student));
	ptr1->Roll=101;
	strcpy(ptr1->Name,"Sudip");
	ptr1->next=ptr2;
	
	Start=ptr1;
	struct Student *q=NULL;
	q=Start;
	while(q!=NULL)
	{
		printf("[Roll:%d Name:%s]\n",q->Roll,q->Name);
		q=q->next;
	}
	return 0;
}
