#include<stdio.h>
#include<conio.h>
void main()
{
	int *p,*q,t,a,b;
	printf("\n Enter any two number: ");
	scang("%d%d",&a,&b);
	print("Before swap a=%d and b=%d\n",a,b);
	p=&a;
	q=&b;
	t=*p;
    *p=*q;
    *q=t;
    printf("\n After swap a=%d and b=%d\n",*p,*q);
    getch();
}
