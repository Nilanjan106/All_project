#include<stdio.h>
#include<conio.h>
int main()
{
	int Number;
	printf("\nEnter what you want: \n");
	scanf("%d",&Number);
	if(Number>=0&&Number<=9)
	{
		printf("It is number\n");
	}
	else
	{
		printf("it is character\n");
	}
	
}
