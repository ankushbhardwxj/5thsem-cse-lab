#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int temp=0;
  int a[1000];
  for(int i=0;i<n;i++)cin>>a[i];
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j>0;j--){
      if(a[j]<a[j-1]){
        temp=a[j-1];
        a[j-1]=a[j];
        a[j]=temp;
      }
    }
  }
  for(int i=0;i<n;i++) cout<<a[i]<<' ';
  return 0;
}
