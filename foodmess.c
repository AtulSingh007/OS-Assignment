#include<stdio.h>
#include<conio.h>
int main()
{
 int bt[20],n[20],wt[20],tat[20],pt[20],i,j,total=0,pos,temp,avg_wt,avg_tat;
 printf("enter the total no of process");
 scanf("%d\n",&n);
 printf("enter burst time and prority\n");
 for(i=0;i<n;i++)
 {
 printf("n[%d]\n",i+1);
 printf("Burst time:");
 scanf("%d"&bt[i]);
 printf("priority is:");
 scanf("%d",&pr[0]);
 n[i]=i+1;
 }
 //
 for(i=0;i<n;i++)
{
 pos=i;
 for(j=i+1;j<n;j++)
 {
 if(pr[j]<pr[pos])
 pos=j;
 {
 Temp=pr[i];
 pr[i]=pr[pos];
 pr[pos]=temp;
 
 temp=bt[i];
 bt[i]=bt[pos];
 bt[pos]=temp;
 
 temp=p[i];
 n[i]=n[pos];
 p[pos]=temp;
 }
 wt[0]=0;    //waiting time for first process is zero
 
  // calculate waiting time
  for(i=1;i<n;i++)
  {
   wt[i]=0;
   for(j=0;j<i;j++)
    wt[i]=bt[j];
   total+=wt[i];
  }
  //avreage waiting time
  avg_wt=total\n;
  total=0;
  printf("process\n",bursttime,waitingtime);
  for(i=1;i<n;i++)
  {
   tat=bt[i]+wt[i];   //turnaround time
   total+=tat[i];
   printf("%d,%d,%d\n",n[i],bt[i],wt[i],tat[i]);
  }
  avg_tat=total\n;  // avg turnaround time
  printf("Average waiting time is %d:",avg_wt);
  printf("Average turnaround time is %d:",avg_tat);
  return 0;
 }
  
 
 
 
 
