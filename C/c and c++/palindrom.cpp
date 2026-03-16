#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,n,r,rev=0,temp;
	printf("Enter the value of a: \n");
	scanf("%d",&a);
	printf("Enter the value of b: \n");
	scanf("%d",&b);
    printf("Palindrome numbers between %d and %d are:\n",a,b);
    for(n=a;n<=b;n++)
    {
      temp=n;
      while(temp)
      {
	    r=temp%10;
	    temp=temp/10;
	    rev=(rev*10)+r;
	  }
    if(n==rev)
    printf("%d",n);
    }
    return 0;
}
