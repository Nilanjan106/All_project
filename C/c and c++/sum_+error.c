#include<stdio.h>
int sum(int);
int main()
{
    int n,r;
    printf("enter the value of n:");
    scanf("%d",&n);
    r = sum(n);
    printf("Sum of digits of %d is =%d\n", n, r);
    return 0;
}
int sum(int n)
   {
    int p,sum;
    if(n!=0)
    {
     n=n%10;
     sum=sum+p;
     n=n/10;
    }
    return sum;
    else
    return 0;
}
