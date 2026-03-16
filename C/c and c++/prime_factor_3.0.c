# include<stdio.h>
# include<conio.h>
void main()
{
	int i,j,n,c=0 ;
	printf("enter your number: ");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			for(j=2;j<=i/2;j++)
			{
				if(i%j==0)
				{
				
			
				c= 1;
			break;	
			}
			}
			if(c==0)
			printf("\nthis is a factor prime number : %d",i);
			
		}
	}
	getch();
}
