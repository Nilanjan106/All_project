#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,r;
	printf("\n ENTERE YOUR NUMBRER \n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		printf("\n NOT PRIME \n");
		break;
	}
	if(i==n)
	{
		printf("\n PRIME \n");
	}
	getch();
}
