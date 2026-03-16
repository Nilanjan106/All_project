#include<stdio.h>
#include<conio.h>
int a[50];
int data;
int n,i;
int position;
void InputInArray()
{
	printf("Enter how many number you want\n");
	scanf("%d",&n);
	printf("Enter data one by one\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void print()
{
	for(i=0;i<n;i++)
	{
		printf("%4d",a[i]);
	}
}
void EnterElementInLastPosition()
{
   printf("Enter data from outside\n");
   scanf("%d",&data); 
   a[n]=data;
   n++;
   printf("\n");
}
void EnterElementAtBeginningPosition()
{
	printf("\nEnter data At begining\n");
	scanf("%d",&data);
	for(i=n-1;i>=0;i--)
	{
		a[i+1]=a[i];
	}
	a[0]=data;
	n++;
}
void EnterElementAtMiddle()
{
	printf("\nEnter at middle position\n");
	scanf("%d",&data);
	printf("\nEnter the position where you want to be inserted\n");
	scanf("%d",&position);
	for(i=n;i>=position;i--)
	{
		a[i]=a[i-1];
	}
	a[i]=data;
	n++;
}
void DeleteElementAtAnyPosition()
{
	printf("Enter Your position \n");
	scanf("%d",&position);
	for(i=position-1;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
}
int main()
{
	
	InputInArray();
	EnterElementInLastPosition();
	print();
    EnterElementAtBeginningPosition();
	print();
	EnterElementAtMiddle();
	print();
	DeleteElementAtAnyPosition();
	print();
	return 0;
}
