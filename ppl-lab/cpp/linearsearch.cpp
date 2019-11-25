#include<iostream>
using namespace std;
int main(){
  int n; cin>>n;
  int a[1000];
  for(int i=0;i<n;i++)cin>>a[i];
  int x; cin>>x;
  int flag=0;
  for(int i=0;i<n;i++){
    if(x==a[i]){
      flag = 1;
    }
  }
  if(flag==0)cout<<"not found";
  else cout<<"Found";
  return 0;
}
