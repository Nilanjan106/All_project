#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],i,j,m,n,t[10][10];
	printf("\n Enter rows and column\n");
    scanf("%d%d",&m,&n);
	printf("\n Enter the elementsof matrix\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",a[i][j]);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			t[j][i]= a[i][j];
	printf("\n Transpose of a matrix\n");
	for(i=0;i<n;i++)
		for(j=0;j<m;j+=)
			printf("%d",t[j][i]);
	printf("\n");
	getch();
}
