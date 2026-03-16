#include<stdio.h>
#include<conio.h>
void number();
int main()
{
number();
return 0;	
}
void number()
{
	int n;
	printf("enter your number");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("EVEN");
	}
	else
	{
		printf("ODD");
	}
}
