#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[30]
	int i,j,k,len;
	printf("Enter a bianry number: ");
	gets(a);
	len=strlen(a);
	for(k=0;a[k]!='\n0';k++)
	{
		if(a[k]!='0'&& a[k]!='1')
		{
			printf("\n Incorrect binary number format ... the program will quit");
			exit 0;
		}	
	}
	for (i= len-1;a[i]!='1';i--)
	for(j=i-1;j>=0;j--)
	{
		if(a[j]=='1')
		a[j]='0 ';
		else 
		a[j]='1'                                              
	}
	printf("\n 2's compliment = %s",a);
}
