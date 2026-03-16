#include<stdio.h>
#include<conio.h>
void main()
{
	int s[10],n,i,max;
	printf("\n Enter your number \n");
	scanf("%d",&n);
	printf("\n Enter number one by one\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i])
	}
	max=s[0];
	for(i=0;i<n;i++)
	{
		if(max<s[i])
		{
			max=s[i]
		}
	}
	printf("\n s[%d]=%d ,s[%d]=%d",i,max);
    getch();
}
