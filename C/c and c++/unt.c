# include<stdio.h>
# include<conio.h>
int main()
{
	int i,j,n,c=1 ;
	printf("enter your number");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%d,",i);
		}
}  
	for(j=2;j<=i/2;j++)
	{
		if(i%j==0)
	{
	
		c=0;
		break;
	}
}

	if(c==1)
	{
		printf("This is prime numer: %d",i);
	}

	return 0;
}
