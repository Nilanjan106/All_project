#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	printf("\n Enter any number: ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	printf("%4d",i);
	getch();
}
