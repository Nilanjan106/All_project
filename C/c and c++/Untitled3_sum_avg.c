#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],n,i,s=0,sum;
	float avg;
	printf("\n Enter how many number you want\n");
	scanf("%d",&n);
	printf("\n Enter array element one by one\n");
	for(i=1;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		s=s+a[i];
		avg=s/(float)n
	}
	printf("\n avarage= %f",avg);
	printf("\n sum=%d",sum);
	getch();
}
