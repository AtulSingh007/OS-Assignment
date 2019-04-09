# OS-Assignment
Q11.11.	Write a C program to solve the following problem:
Suppose that a disk drive has 5,000 cylinders, numbered 0 to 4999. The drive is currently serving a request at cylinder143, and the previous request was at cylinder 125. The queue of pending requests, in FIFO
order,is:
86, 1470, 913, 1774, 948, 1509, 1022, 1750, 130
starting from the current head position, what is the total distance (in cylinders)that the disk arm moves to satisfy all the pending requests for each of the SCAN disk-scheduling algorithms?

ans:-#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int pReq[15],i,j,cylinder,curPossition,prevPossition,qSize,qInput,qList[15],sortQueList[15],t,calc,sum=0,rev,result;
	printf("Please enter the max size of cylinder disk drive : ");
	scanf("\n%d",&cylinder);
	printf("Please enter the current position of Serving : ");
	scanf("\n%d",&curPossition);
	printf("Please enter the pending queue list size : ");
	scanf("\n%d",&qSize);
	printf("Please enter the pending %d queue Number : ",qSize);
	for (i = 0; i<=qSize-1; i++)
	{
		scanf("%d",&qInput); //taking pending queue list input from user.
		if (qInput>0)
		{
			qList[i]=qInput;
		}
}
  for (i = 0; i < qSize-1; i++) 
        {
           for (j = i+1 ; j < qSize; j++)
            {
               if (qList[i] > qList[j]) 
                {
                    t =  qList[i];
                    qList[i] = qList[j];
                    qList[j] = t;
               }
            }
        }

for (i = 0; i<qSize; i++) //printing the all pending queue list.
	{
		printf("Que List [%d]: ",i+1);
		printf("%d\n",qList[i]);
	}
	//qList[0] = qSize;
	for (i = 0; i<qSize-1; i++)
	{
		if (qList[i] > curPossition)
		{
			calc = abs(qList[i+1]-qList[i]);
			sum+=calc;
			printf("%d\n",calc);
		}
	}
	rev = abs(qList[0]-0);
	printf("\nReverse : %d",rev);
	result = sum+rev;
	printf("\nSum is : %d",result);
}


Q14.	If a teacher is being served at the food mess and during the period when he is being served, another teacher comes, then that teacher would get the service (food) next. This process might continue leading to increase in waiting time of students to get food. Ensure in your program that the waiting time of students is minimized.
ans:-#include<stdio.h>
 
int main()
{
    int bt[20],p[20],wt[20],tat[20],pr[20],i,j,n,total=0,pos,temp,avg_wt,avg_tat;
    printf("Enter Total Number of Process:");
    scanf("%d",&n);
 
    printf("\nEnter Burst Time and Priority\n");
    for(x=0;x<n;x++)
    {
        printf("\nP[%d]\n",x+1);
        printf("Burst Time:");
        scanf("%d",&bt[x]);
        printf("Priority:");
        scanf("%d",&pr[x]);
        p[x]=x+1;           
    }
 
    for(x=0;x<n;x++)
    {
        pos=x;
        for(j=x+1;j<n;j++)
        {
            if(pr[j]<pr[pos])
                pos=j;
        }
 
        temp=pr[x];
        pr[x]=pr[pos];
        pr[pos]=temp;
 
        temp=bt[x];
        bt[x]=bt[pos];
        bt[pos]=temp;
 
        temp=p[x];
        p[x]=p[pos];
        p[pos]=temp;
    }
 
    wt[0]=0;    
    for(x=1;x<n;x++)
    {
        wt[x]=0;
        for(j=0;j<x;j++)
            wt[x]+=bt[j];
 
        total+=wt[x];
    }
 
    avg_wt=total/n;      
    total=0;
    printf("\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time");
    for(x=0;x<n;i++)
    {
        tat[x]=bt[x]+wt[x];   
        total+=tat[x];
        printf("\nP[%d]\t\t  %d\t\t    %d\t\t\t%d",p[x],bt[x],wt[x],tat[x]);
    }
 
    avg_tat=total/n;  
    printf("\n\nAverage Waiting Time=%d",avg_wt);
    printf("\nAverage Turnaround Time=%d\n",avg_tat);
 
    return 0;
}

