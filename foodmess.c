#include<stdio.h>
#include<conio.h>
int main()
{
 int bt[20],p[20],wt[20],tat[20],pt[20],i,j,total=0,pos,temp,avg_wt,avg_tat;
 printf("enter the total no of process");
 scanf("%d\n",&n);
 printf("enter burst time and prority\n");
 for(i=0;i<n;i++)
 {
 printf("P[%d]\n",i+1);
 printf("Burst time:");
 scanf("%d"&bt[i]);
 printf("priority is:");
 scanf("%d",&pr[0]);
 p[i]=i+1;
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
 p[i]=p[pos];
 p[pos]=temp;
 }
 wt[0]=0;    //waiting time for first process is zero
 
 
 
 
