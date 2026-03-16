#include<stdio.h>
#include<conio.h>
#define max 30
int main()
{
	int i,j,wt[max],bt[max],tat[max],n;
	float awt=0,atat=0;
	
	printf("Enter your number of process\n");
	scanf("%d",&n);
	printf("enter the burst time of the process\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&bt[i]);
		
	}
	printf("Process\t burst time\t waiting time\t turn around time\n");
	for(i=0;i<n;i++)
	{
		wt[i]=0;
		tat[i]=0;
		for(j=0;j<n;j++)
		{
			wt[i]=wt[i]+bt[j];
		}
		tat[i]=wt[i]+bt[i];
		awt=awt+wt[i];
		atat=atat+tat[i];
		printf("%d\t%d\t\t%d\t\t%d\n",i+1,bt[i],wt[i],tat[i]);
	}
	awt=awt/n;
	atat=atat/n;
	printf("Avarge waiting time=%f",awt);
	printf("Avarge turn around time time=%f",atat);
	getch();
		
	
}
