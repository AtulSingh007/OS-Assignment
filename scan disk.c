#include<stdio.h>
#include<conio.h>
void scan_algorithm(int left[], int right[],int count,int limit)
{
int arr[20];
int x=count-1, y=count+1, c=0, d=0, j;
while(x >-1)
{
printf("%d\n",x);
printf("%d,left",left[x]);
arr[d]=left[x];
x--;
d++;
}
arr[d]=0;
while(y < limit+1)
{
arr[y]=right[c];
c++;
y++;
}
printf("cylinder order is :\n");
for(j=0; j<limit+1;j++)
{
printf("%d\n",arr[j]);
}
}
void division(int element[],int limit,int disk_head)
int count=0,p,q,m,x;
int left[20],right[20];
for(count=0;count<limit;count++)
{
if(element[count]> disk_head)
{
printf("%d\n",element[count]);
break;
}
}


