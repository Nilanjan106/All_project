#include<stdio.h>
#include<conio.h>
#define max 30
int main()
{
	int i,n,total=0,x,counter=0,tq;
	int p[max],wt[max],tat[max],at[max],bt[max],temp[max];
	float awt=0,atat=0;
	printf("Enter the process:\n");
	scanf("%d",&n);
	x=n;
	for(i=0;i<n;i++)
	{
		printf("\nEnter Details Of Process[%d]\n",i+1);
		printf("Arrival Time: ");
		scanf("%d",at[i]);
		printf("Brust Time: ");
		scanf("%d",bt[i]);
		temp[i]=bt[i];
		p[i]=i+1;
	}
	printf("\nEnter Time Quantum: ");
	scanf("%d",&tq);
	printf("Process\t burst time\t waiting time\t turn around time\n");
	for(total=0;i=0;x!=0)
	{
		total=total+temp[i];
		temp[i]=0;
		counter=1;
	}
	else if(temp[i]>0)
	{
		temp[i]=temp[i]-tq;
		total=total+tq;
	}
	if(temp[i]==0&&counter==1)
	{
		x--;
		printf("\np[%d]\t%d\t\t%d\t\t%d",p[i],bt[i],total-at[i],total-at[i]-bt[i]);
		wt[i]=wt[i]+bt[j]
	}
}
