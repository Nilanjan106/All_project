#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],n,i,s=0;
	float avg;
	printf("\n Enter how many number number you want: \n");
	scanf("%d",&n);
	printf("\n Enter number one by one: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		s=s+a[i];
		avg=(float)s/n;
	}
	printf("\n sum=%d",s);
	printf("\n avg=%f",avg);
	getch();
}
