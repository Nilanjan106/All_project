#include<stdio.h>
#include<conio.h>
void main()
{
    int a[20],i,n;
    printf("\n enter how many number you want\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }
    printf("\n ENTER NUMMBER ONE BY ONE\n");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
        printf("EVEN NUMBERS ARE:%d,",a[i]);
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==1)
        {
            printf("ODD NUMBERS ARE:%d,",a[i]);
        }
    }
    getch();
}
