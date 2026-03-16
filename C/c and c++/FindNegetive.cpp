#include<stdio.h>
int pos(int n);
int main() 
{
	int n;
	printf("\nEnter the  number: ");
	scanf("%d",&n);
	int res=pos(n);
	printf("Res:%d",res);
	return 0;
}
int pos(int n)
{
	return -n;
}
