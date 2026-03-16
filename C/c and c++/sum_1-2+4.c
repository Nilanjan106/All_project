]]]]#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,s=0;
	printf("\n enter the number ");
	scanf("%d",&n);
	for(i=1;i<=n;i++);
	{
		if(i%2==0)
		{
			s=s-i;
		}
		else
		{
			s=s+i;
		}
	}
printf("%d",s);
getch();
}
