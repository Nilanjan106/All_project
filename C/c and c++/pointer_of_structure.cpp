#include<stdio.h>
#include<conio.h>
struct Book
{
	int Page;
	float Price;
};
int main()
{
	//int *ptr
	Book *ptr=NULL;
	Book b1={505,349.00};
	ptr=&b1;
	printf("Page No:%d and Price Rs.%f",ptr->Page,ptr->Price);
	return 0;
}
