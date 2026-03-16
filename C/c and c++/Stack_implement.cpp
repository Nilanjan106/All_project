#include<stdio.h>
#include<conio.h>
int Top=-1;
int Stack[10];
int MaxSize;
void Push()
{
	int data;
	printf("Are you want to Push the data?\n");
	scanf("%d",&data);
	if(Top==-1||Top<MaxSize)
	{
		Top++;
		Stack[MaxSize]==data;
	}
	else
	{
		printf("\nOverflow\n");
	}
}
void Pop()
{
	if(Top<=-1)
	{
		printf("\nUnderflow\n");
	}
	else
	{
		printf("%d is popped\n",Stack[Top]);
		Top--;
	}
}
void Display()
{
	printf("Print The Data\n");
	for(int i=0;i<Top;i++)
	{
		printf("\n%d",Stack[i]);
	}
}
int main()
{
	int Choice;
	printf("\n\t1)Push\n\t2)Pop\n\t3)Display\n\t4)Exit\n\t");
	do
	{
		printf("\nEnter the choice\n");
		scanf("%d",&Choice);
		switch(Choice)
		{
			case 1:
				Push();
				break;
			case 2:
				Pop();
				break;
			case 3:
				Display();
				break;
			case 4:
				printf("\nExit Point\n");
				break;
			default:
				{
					printf("\nPlease Enter a valid choice(1/2/3/4)");
				}
		}
	}
	while(Choice!=4);
}
