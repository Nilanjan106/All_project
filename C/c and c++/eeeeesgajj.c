#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,s1=0,s2=0,s;
	printf("\n Enter trhe last term:");
	scanf("%d",&n);
	s=s2-s1;
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		s1=s2+i;
		else
		s2=s2+i;
	}
	printf("Result=%d",s);
	getch();
}
