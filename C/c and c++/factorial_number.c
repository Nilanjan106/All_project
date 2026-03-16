#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	printf("\n Enter the positive inter number\n");
	scanf("%d",&n);
	printf("\n Factor of %d are : ",n);
	for(i=0;i<=n;i++)
	{
		if(n%i==0)
		{
			n=n*i;
		}
		printf("%d,",i);
	}
	getch();
}
