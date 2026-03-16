# include <stdio.h>
# include <conio.h>
# include <string.h>
void main()
{
	int i,l,c=0;
	char a[20];
	printf("enter your string : ");
	gets(a);
	l=strlen(a);
	for (i=0;i<l;i++)
	{
		if (a[i]!=a[l-i-1])
		{
			c++;
			break;
		}
	}
	if(c==0)
	{
		printf("\nstring is palinedrom");
	}
	else 
	{
		printf ("\nstring is not palindrom" );
	}
}
