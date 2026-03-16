//Stack operations using array
#include<stdio.h>
#include<conio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main()
{
	top=-1;
	printf("\n Enter the size of Stack[max=100]: \n");
	scanf("%d",&n);
	printf("\n\t Stack operations using array");
	printf("\n\t------------------------------");
	printf("\n\t 1)PUSH\n\t 2)POP\n\t 3) DISPLAY\n\t 4)EXIT\n");
	do
	{
		printf("\n Enter the choice: \n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					push();
					break;
				}
			case 2:
			    {
			    	pop();
			    	break;
				}
			case 3:
			    {
			    	display();
			    	break;
				}
			case 4:
			    {
			    	printf("\n Exit point\n");
			    	break;
				}
			default:
			    {
			    	printf("\n Please Enter a valid choice(1/2/3/4)\n");
				}				
		}
	}
	while(choice!=4);
	return 0;
}
void push()
{
	if(top>=n-1)
	{
		printf("\n The stack over flow\n");
	}
	else
	{
		printf("\nEnter a value to be pushed\n");
		scanf("%d",&x);
		top++;
		stack[top]=x;
	}
}
void pop()
{
	if(top<=-1)
	{
		printf("\n The stack under flow\n");
	}
	else
	{
		printf("\n The popped elemets is %d",stack[top]);
		top--;
	}
}
void display()
{
	if(top>=0)
	{
		printf("\n The elements in stack\n");
		for(i=0;i>=0;i--)
		{
			printf("\n%d",stack[i]);
		}
		printf("\n Press next choice");
	}
	else
	{
		printf("\n The stack is empty");
	}
}
