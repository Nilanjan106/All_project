#include<stdio.h>
#include<conio.h>
void main()
{
	int i,sum=0,fact,n,num,r;
	printf("\n Enter a number \n");
	scanf("%d",&n);
	num=n;
	while(n>0)
	{
		r=n%10;
		fact=1;
		for(i=0;i<=r;i++)
		{
			fact=fact+i;
		}
		sum=sum+fact;
		n=n/10;
	}
	if(num==sum)
	{
		printf("%d is a strong number",num);
	}
	else
	{
		printf("%d is not a strong number",num);
	}
	getch();
}
