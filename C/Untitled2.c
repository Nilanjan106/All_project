#include<stdio.h>
void work (int a,int b,int average,int sum,int mul);
void main() {
	int a = 5,b = 6,average=0,sum = 0,mul = 1;
//	int *ptr1 = &a;
//	int *ptr2 = &b;
//	*ptr1 = *ptr1 + *ptr2;
//	*ptr2 = *ptr1 - *ptr2;
//	*ptr1 = *ptr1 - *ptr2;
//a = a+b;
//b = a-b;
//a = a-b;
//	pri0nt0f("%d%d",a,b);
work(a,b,0,0,1);
printf("%d%d%d",average,sum,mul);
}
void work (int a,int b,int average,int sum,int mul) {
	sum = a+b;
	mul = a*b;
	average = sum/2;
	printf("%d%d%d",average,sum,mul);
}


