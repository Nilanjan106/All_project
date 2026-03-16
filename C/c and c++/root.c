#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{

float a,b,c,d,r1,r2;
printf("\n Enter value of a,b and c\n");
scanf("%f%f%f",&a,&b,&c);
d=b*b-4*a*c;
if(d<0)
{
printf("\n ROOTS ARE IMAGINARY\n");
}
else
{
	r1=(-b + sqrt(d))/(2.0*a);
	r2=(-b + sqrt(d))/(2.0*a);
	printf("\n r1 =%5.2f\n\nr2=%5.2\n",r1,r2);
}
}
