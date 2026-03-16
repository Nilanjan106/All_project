#include<stdio.h>
#include<conio.h>
void main()
{
	 int *ip ,a=7;
	 ip=&a;
	 printf("\n a= %d\n",a);
	 printf("\n ip=%u\n",ip);
	 printf("\n *ip=%d\n",*ip);
	 getch();
}
