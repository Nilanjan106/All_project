#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	float sum=0;
	printf("\nEnter any number :");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		sum=sum+1/(float)i;
	}
	printf("\n Sum=%f",sum);
	getch();
}
