#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
    int n,k;
    printf("enter the number:");
    scanf("%d",&n);
    k=fact(n);
    printf("factorial is:%d",k);
    getch();
}
int fact(int n)
{
    if(n==0)
    return 1;
    else
    return (n*fact(n-1));
}
