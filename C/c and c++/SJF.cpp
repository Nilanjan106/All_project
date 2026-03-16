#include<stdio.h>
#include<conio.h>
#define max 30
int main()
{
	int i,j,p[max],wt[max],bt[max],tat[max],n,total=0,pos,temp;
	float awt=0,atat=0;
	printf("Enter the process\n");
	scanf("%d",&n);
	printf("Enter Brust time:\n");
	for(i=0;i<n;i++)
	{
		printf("p%d",i+1);
		scanf("%d",&bt[i]);
		p[i]=i+1;
	}
	for(i=0;i<n;i++)
	{
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(bt[j]<bt[pos])
			pos=j;
		}
		temp=bt[i];
		bt[i]=bt[pos];
		bt[pos]=temp;
		temp=p[i];
		p[i]=p[pos];
		p[pos]=temp;
	}
	wt[0]=0;
	for(i<1;i<n;i++)
	{
		wt[i]=0;
		for(j=0;j<i;j++)
		{
			wt[i]=wt[i]+bt[j];
			total+=wt[i];
		}
    }
		awt=(float)total/n;
		total=0;
		printf("Process\t burst time\t waiting time\t turn around time\n");
		for(i=0;i<n;i++)
		{
			tat[i]=bt[i]+wt[i];
			total+=tat[i];
			printf("\np%d\t\t%d\t\t%d\t\t%d",p[i],bt[i],wt[i],tat[i]);
		}
		atat=(float)total/n;
		printf("\nAverage Waiting time=%f",awt);
		printf("\nAverage Turnaround time=%f",atat);
}
