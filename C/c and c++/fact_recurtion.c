# include<stdio.h>
# include<conio.h>
void main()
{
	int fact (int);
	int n,k;
	printf("enter number");
	scanf("%d",&n);
	if(n>0)
	{
	k=fact(n);
	printf("result=%d",k);
	
}
else 
{
	printf("not possible");
}
getch();
}
int fact (int n)
{
	{
	 return n*fact(n-1);
}
}
