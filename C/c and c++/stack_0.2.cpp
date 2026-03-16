#include<stdio.h>
#include<conio.h>
int Top=-1;
int Stack[100];
int MaxSize;
int Data;
void Push()
{
	if(Top>=MaxSize-1)
	{
		printf("\nThe stack is overflowed\n");
	}
	else
	{
		printf("\nEnter the value to be pushed\n");
		scanf("%d",&Data);
		Top++;
		Stack[Top]=Data;
	}
}
void Pop()
{
	if(Top<=-1)
	{
		printf("\nThe stack is underflowed\n");
	}
	else
	{
		printf("\nThe popped value id %d\n",Stack[Top]);
		Top--;
	}
}
void Display()
{
	if(Top>=0)
	{
		printf("\nThe element in stack\n");
		for(int i=0;i<=Top;i++)
		{
			printf("\n%4d",Stack[i]);
		}
		printf("\nPress next choice\n");
   }
	else
		{
			printf("The stack is empty\n");
		}
}
int main()
{
	int Choice;
	printf("\n Enter the size of Stack: \n");
	scanf("%d",&MaxSize);
	printf("\n\t 1)PUSH\n\t 2)POP\n\t 3) DISPLAY\n\t 4)EXIT\n");
	do
	{
		printf("\nEnter the choice:\n");
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
				printf("\nExit point\n");
				break;
			default:
			{
				printf("\nPlease enter a valid choice(1/2/3/4)\n");
			}	
		}
	}
	while(Choice!=4);
	return 0;
}
