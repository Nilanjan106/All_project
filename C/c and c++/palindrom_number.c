# include <stdio.h>
# include <conio.h>
void main()
{
	int n,r=0,s=0,i=0,k;
	printf("enter your number :");
	scanf("%d",&n);
	k=n;
	while(i<n)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	if(s==k)
	{
		printf("this is palindrom number and number is %d",s);
		
	}
	else
	{
		printf("this is not pallindrom %d",s);
	}
	getch();
}
