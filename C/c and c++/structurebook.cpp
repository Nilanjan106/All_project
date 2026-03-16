#include<stdio.h>
#include<conio.h>

struct Book
{
	char BName[30];
	char AName[30];
	char Publish[20];
	int PageNumber;
	float Price;

	void Input()
	{
		printf("Enter Book Name:");
		scanf("%s",BName);
		printf("Enter Author Name:");
		scanf("%s",AName);
		printf("Enter Publisher Name:");
		scanf("%s",Publish);
		printf("Enter Page Number:");
		scanf("%d",&PageNumber);
		printf("Enter Price:");
		scanf("%f",&Price);
	}
	void Print()
	{
		printf("Book Name:%s\n",BName);
		printf("Author Name:%s\n",AName);
		printf("Publisher Name:%s\n",BName);
		printf("Page Number:%d\n",PageNumber);
		printf("Price Rs.%.2f",Price);
	}
};
int main()
{
	/*Book b1;
	b1.Input();
	b1.Print();

	Book b2;
	b2.Input();
	b2.Print();*/
	//int arr[]={10,20,30}
	//Book books[10];//array of structures
	/*Book b1,b2,b3,b4;
	Book books[]={b1,b2,b3,b4};*/
	Book books[40];
	int n;
	printf("How books u want to buy?");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		books[i].Input();
		printf("\n..........................\n");
	}
	printf("\n................Book Details...............\n");
	for(int i=0;i<n;i++)
	{
		books[i].Print();
		printf("\n..........................\n");
	}
	return 0;
}
