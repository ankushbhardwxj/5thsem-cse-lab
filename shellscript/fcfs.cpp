//criteria - arrival time
//Non preemptive
#include<iostream>
using namespace std;
void print_table(int p,int p_no[], int at[], int bt[], int ct[], int tat[], int wt[]){
  cout<<"p_no\tat\tbt\tct\ttat\twt"<<endl;
  for(int i=0;i<p;i++){
    cout<<p_no[i]<<"\t"<<at[i]<<"\t"<<bt[i]<<"\t"<<ct[i]<<"\t"<<tat[i]<<"\t"<<wt[i]<<endl;
  }
}
void calc_ct(int p,int p_no[], int at[], int bt[], int ct[]){
  int s = 0;
  for(int i=0;i<p;i++){
    //check for smallest AT
    //if multiple AT is present,check for lowest p_no
    s += bt[i];
    ct[i] = s;
  }
}
void calc_tat(int p, int p_no[], int ct[], int at[], int tat[]){
  for(int i=0;i<p;i++){
    tat[i] = ct[i] - at[i];
  }
}
void calc_wt(int p, int p_no[], int tat[], int bt[], int wt[]){
  for(int i=0;i<p;i++){
    wt[i] = tat[i] - bt[i];
  }
}
void print_avgTAT(int p, int tat[]){
  int avg_tat = 0;
  for(int i=0;i<p;i++){
    avg_tat += tat[i];
  }
  avg_tat = avg_tat / p;
  cout<<"Average TAT : "<<avg_tat<<endl;
}
void print_avgWT(int p, int wt[]){
  int avg_wt = 0;
  for(int i=0;i<p;i++){
    avg_wt += wt[i];
  }
  avg_wt = avg_wt / 10;
  cout<<"Average WT : "<<avg_wt<<endl;
}
int main(){
  int p, p_no[10], ct[10], tat[10], wt[10], at[10], bt[10];
  cout<<"Enter number of processes:";
  cin>>p;
  for(int i=0;i<p;i++){
    p_no[i] = i+1;
  }
  cout<<"Enter burst time : "<<endl;
  for(int i=0;i<p;i++){
    cin>>bt[i];
  }
  cout<<"Enter arrival time : "<<endl;
  for(int i=0;i<p;i++){
    cin>>at[i];
  }
  calc_ct(p,p_no,at,bt,ct);
  calc_tat(p,p_no,ct,at,tat);
  calc_wt(p,p_no,tat,bt,wt);
  print_table(p,p_no,at,bt,ct,tat,wt);
  print_avgTAT(p,tat);
  print_avgWT(p,wt);
  return 0;
}