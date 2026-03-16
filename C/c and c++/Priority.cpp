#include<stdio.h>
#include<conio.h>
#define max 30
int main()
{
	int bt[max],p[max],wt[max],tat[max],pr[max],i,j,n,total=0,pos,temp;
	float awt=0,atat=0;
	printf("Enter the process\n");
	scanf("%d",&n);
	printf("\nEnter the Brust time and priority\n");
	for(i=0;i<n;i++)
	{
		printf("\np[%d]\n",i+1);
		printf("Brust time: ");
		scanf("%d",&bt[i]);
		printf("Priority: ");
		scanf("%d",&pr[i]);
		p[i]=i+1;
	}
	for(i=0;i<n;i++)
	{
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(pr[j]<pr[pos])
			pos=j;
		}
		temp=pr[i];
		pr[i]=pr[pos];
		pr[pos]=temp;
		temp=bt[i];
		bt[i]=bt[pos];
		bt[pos]=temp;
		temp=p[i];
		p[i]=p[pos];
		p[pos]=temp;
	}
	wt[0]=0;
	for(i=1;i<n;i++)
	{
		wt[i]=0;
		for(j=0;j<i;j++)
		{
			wt[i]=wt[i]+bt[j];
			total+=wt[i];
		}
		awt=(float)total/n;
		total=0;
		printf("Process\t burst time\t waiting time\t turn around time\n");
		for(i=0;i<n;i++)
		{
			tat[i]=bt[i]+wt[i];
			total+=tat[i];
			printf("\np[%d]\t%d\t\t%d\t\t%d",p[i],bt[i],wt[i],tat[i]);
		}
		atat=(float)total/n;
		printf("\nAverage waiting time=%f",awt);
		printf("\nAverage turnaround time=%f",atat);
	}
}
