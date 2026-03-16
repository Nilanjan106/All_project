#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char array[20];
	int i=0;
	printf("\n enter string\n");
	gets(array);
	while(array[i]!=NULL)
	{
		i++;
	}
	printf("\n length of string=%d\n",i);
	return 0;
}
