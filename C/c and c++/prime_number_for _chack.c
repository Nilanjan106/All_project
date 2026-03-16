# include<stdio.h>
# include<conio.h>
void main()
{
 	int i,r=0,n;
	printf("Enter any number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
		r++;
	}
}
if (r==2)
	{
	printf("prime number");
	}
		else
		{
			printf("not prime number");
		}
		getch();
}
