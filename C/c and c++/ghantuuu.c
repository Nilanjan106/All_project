#include <stdio.h> 
#include <conio.h> 
void main ()
{

int i,n, a[10], s=0, v, max=0,k, min = a[0];
 printf("Enter to print even and values\n of the array. 1 Enter 2 to print arm and avarage of the elements of the array in Entor 3 to print max and 12 min value \n enter 4 to print the array in revers order\n");

printf ("\nEnter Your choice: "); 
scanf("%d",&k);
printf("\nHow many number You want: "); 
scanf ("%d",&n); 
switch(k) 
{
case 1:
{

for (i=0;i<n;i++)
{ 
scanf("%d",&a[i]);
 if (a[i]%2==0)
{

printf("\n%d is even numben", a[i]);
}
else{
 printf("\n%d is a odd number", a[i]);}
 break;
}
case 2:
	{

for (i=0; i<n;i++)
{ 
scanf("%d",&a[i]);
s=s=a[i];
v=s/n;
}
printf("\nThe sum of the elements is : %d",s);
printf("\nThe avarage of the elements is :%d",v);
}
case 3:
	{

for (i=0; i<n;i++)
{ 
scanf("%d",&a[i]);
if(max<a[i])
{
	max=a[i];
}
printf("\nmax=%d",max);
if(min>a[i])
{
min=a[i];
}
}
printf("\nmin=%d",min);
break;
}
case 4:
	{

for (i=0; i<n;i++)
{ 
scanf("%d",&a[i]);
}
printf("\nThe reverse order is :\n");
for(i=n-1;i<=0;i--)
{
	printf("%4d",a[i]);
}
break;
}
}
}
}
