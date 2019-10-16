#include<iostream>
using namespace std;

int main(){
  int n; cin>>n;
  int wt[10000];
  int bt[10000];
  int tat[10000];
  int avwt=0;
  int avtat=0; int i; int j;
  cout<<"Enter total number of processes: "<<endl;
  //insert burst time
  for(i=0;i<n;i++){
    cout<<"P["<<i+1<<"]: ";
    cin>>bt[i];
  }
  wt[0]=0;
  //cal waiting time
  for(i=1;i<n;i++){
    wt[i]=0;
    for(j=0;j<i;j++)
      wt[i]+=bt[j];
  }
  cout<<"\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time";
  //cal tat
  for(i=0;i<n;i++){
    tat[i]=bt[i]+wt[i];
    avwt+=wt[i];
    avtat+=tat[i];
    cout<<"\nP["<<i+1<<"]"<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i];
  }
  avwt/=i;
  avtat/=i;
  cout<<endl;
  cout<<"Avg wt: "<<avwt<<endl;
  cout<<"Avg tat: "<<avtat<<endl;
  return 0;
}
