#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	printf("\n Prime number are...\n");
	for(i=1;i<=100;i++)
	{
		k=1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				k=0;
				break;
			}
		}
		if(k==1)
		printf("%4d",i);
	}
	getch();
}
