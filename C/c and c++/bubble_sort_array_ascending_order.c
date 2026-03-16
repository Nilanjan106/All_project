void main()
{
int a[20],i,n,j,t;
printf("\n enter your number \n");
scanf("%d",&n);

printf("\n enter number one by one\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
printf("\n the number are ascending order\n");
for(i=0;i<n;i++)
 {
printf("%d",a[i]);
}
getch();
}
