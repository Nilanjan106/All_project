#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,j,n;
	char a[50][20],t[50];
	printf("\n Enter how many numbers\n");
	scanf("%d",&n);
	printf("\n enter names one by one: \n");
	for(i=0;i<n;i++)
	get(a[i]);
	for(i=0;i<n-1;i++)
	for(j=0;j<n-1;j++)
	{
		int(strcmp a[j],a[j+1])
		{
			strcpy(t,a[j]);
			strcpy(a[j],a[j+i]);
			strcpy(a[j+1],a[t]);
		}
	}
	printf("\n After sort.......\n");
	for(f=0;i<n;i++)
	puts(a[i]);
	getch();
}
