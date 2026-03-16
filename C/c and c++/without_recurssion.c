#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,f=1;
	printf("\n Enter number\n");
	scanf("%d",&n);
	if(n<0)
	{
		printf("\n NOT POSSIABLE\n");
	}
	else
	{
		for(i=0;i<=n;i++)
		{
			f=f*i;
		}
		printf("\n Factorial=%d\n",f);
	}
	getch();
}
