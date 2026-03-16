# include<stdio.h>
# include<conio.h>
void main()
{
	int n,i,s=0,a[10];
	printf ("how many number you want:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
		s=s-i;	
		printf ("-%d",i);
		}
		else
		{
		s=s+i;
		printf ("+%d",i);
	}
	}
	printf("\nresult=%d",s);
	getch();
}
