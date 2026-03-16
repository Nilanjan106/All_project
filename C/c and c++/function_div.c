#include<stdio.h>
int div(int n1,int n2);
int main()
{
	int n1,n2,divi;// Here take n1>n2
	printf("\nEnter two number\n");
	scanf("%d%d",&n1,&n2);
	divi=div(n1,n2);
	printf("\nDivi=%d",divi);
	return 0;
}

int div(int n1,int n2)
{
	if(n2!=0)
	{
	 return (n1/n2);
    }
}
