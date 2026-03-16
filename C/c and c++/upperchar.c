#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	char ch;
	printf("Enter a upper charecter: ");
	scanf("%c",&ch);
	a=ch+32;
	printf("%c character in lower case: %c",ch,a);
	getch();
}
