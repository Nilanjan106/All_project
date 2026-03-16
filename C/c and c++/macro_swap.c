# include <stdio.h>
# include <conio.h>
# define swap(a,b,temp)  temp=a;a=b;b=temp;
void main()
{
int a,b,temp;
printf("Enter two number: ");
scanf("%d%d",&a,&b);
printf("before swaping the first number = %d second number = %d\n",a,b);
swap(a,b,temp);
printf("\n After swaping the first number = %d\n second number = %d",a,b );
getch();
}
