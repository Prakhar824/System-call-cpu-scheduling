#include<stdio.h>
int t_a_t(int tat[],int n ,int bt[],int wt[],int *avwt,int *avtat)
{
printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");
 
    //calculating turnaround time
    for(int i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];
        *avwt+=wt[i];
        *avtat+=tat[i];
        printf("\nP[%d]\t\t%d\t\t%d\t\t%d",i+1,bt[i],wt[i],tat[i]);
    }
return 0;
} 
int w_t(int wt[],int n,int bt[])
{
	 wt[0]=0;    //waiting time for first process is 0
 
    //calculating waiting time
    for(int i=1;i<n;i++)
    {
        wt[i]=0;
        for(int j=0;j<i;j++)
            wt[i]+=bt[j];
    }
return 0;
}
int input(int n,int bt[])
{
printf("\nEnter Process no. and its Burst Time\n");
    for(int i=0;i<n;i++)
    {   
        printf("P[%d]:",i+1);
        scanf("%d",&bt[i]);
    }
return 0;
}
int main()
{
    int n,bt[20],wt[20],tat[20],p[20],avwt=0,avtat=0,i,j;
    printf("Enter total number of processes(maximum 20):");
    scanf("%d",&n);
 
   input(n,bt);
   w_t(wt,n,bt); 
   t_a_t(tat, n ,bt,wt,&avwt,&avtat);
 
    avwt/=n;
    avtat/=n;
    printf("\n\nAverage Waiting Time:%d",avwt);
    printf("\nAverage Turnaround Time:%d\n",avtat);
 
    return 0;
}

