#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	char ch;
	printf("Enter a lower charecter: ");
	scanf("%c",&ch);
	a=ch-32;
	printf("%c character in upper case: %c",ch,a);
	getch();
}
