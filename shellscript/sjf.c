#include<stdio.h>
void main(){
  int bt[20],p[20],wt[20],tat[20],i,j,n,total=0,pos,temp;
  float avg_wt, avg_tat;
  printf("Enter number of processes: ");
  scanf("%d",&n);
  printf("Enter burst time: \n");
  for(i=0;i<n;i++){
    printf("p%d:",i+1);
    scanf("%d",&bt[i]);
    p[i]=i+1;
  }
  //sorting bt in ascending order
  for(i=0;i<n;i++){
    pos=i;
    for(j=i+1;j<n;j++){
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
  //cal waiting time
  for(i=1;i<n;i++){
    wt[i]=0;
    for(j=0;j<i;j++)
    wt[i]+=bt[j];
    total+=wt[i];
  }
  avg_wt=(float)total/n;
  total=0;
  printf("\nProcess\t\tBurstTime\tWaitingTime\tTurnaroundTime");
  for(i=0;i<n;i++){
    tat[i]=bt[i]+wt[i];
    total+=tat[i];
    printf("\n%d\t\t%d\t\t%d\t\t%d",p[i],bt[i],wt[i],tat[i]);
  }
  avg_tat=(float)total/n;
  printf("\nAvg_wt=%f",avg_wt);
  printf("\nAvg_tat=%f",avg_tat);
}
