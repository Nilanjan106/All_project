#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,n,s=0;
	printf("\n enter the number\n");
	scanf("%d",n);
	printf("\n sum of serise= ");
	while(i<n)
	{
		s=s+i;
		i=i+1;
	}
	printf("n%d",s);
	getch();
}
