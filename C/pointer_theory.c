#include<stdio.h>
void swap(int *x,int *y);
void _swap(int x,int y);
void main () {
	int a = 6,b=7;
	float *ptr1;
	int c;
	ptr1 = &c;
	printf("%d",ptr1);
//int ptr1 = &a;
//int *ptr2 = ptr1;
//int *ptr2 = &b;
//if(*ptr1>*ptr2) {
//	printf("%d",*ptr1);
//} else {
//	printf("%d",*ptr2);
//}
//printf("%d%d",&a,&b);
//x(a,b);
//printf("%d%d \n",&a,&b);
//printf("%d%d \n",a,b);
//swap(&a,&b);
//printf("%d%d \n",&a,&b);
//printf("%d%d \n",a,b);
//_swap(a,b);
//printf("%d%d \n",&a,&b);
//printf("%d%d \n",a,b);
}
void x (int a,int b) {
printf("%d%d \n",&(a),&(b));
}
void swap (int *x,int *y) {
	printf("%d%d \n",*x,*y);
	printf("%d%d \n",(x),(y));
	printf("%d%d \n",&(x),&(y));
	printf("%d%d \n",&(*x),&(*y));
	*x = *x+*y;
	*y = *x-*y;
	*x = *x-*y;
	printf("%d%d \n",*x,*y);
	printf("%d%d \n",(x),(y));
	printf("%d%d \n",&(x),&(y));
	printf("%d%d \n",&(*x),&(*y));
}
void _swap (int x,int y) {
printf("%d%d \n",x,y);
printf("%d%d \n",&x,&y);
	x = x+y;
	y = x-y;
	x = x-y;
    printf("%d%d \n",x,y);
	printf("%d%d \n",&x,&y);
}
