#include<stdio.h>
int add(int n1,int n2);
void main()
{
	int n1,n2,addition;
	printf("\nEnter value of two number\n");
	scanf("%d%d",&n1,&n2);
	addition=add(n1,n2);
	printf("\nAddition=%d",addition);
	getch();
}
int add(int n1,int n2)
{
	return (n1+n2);
}
