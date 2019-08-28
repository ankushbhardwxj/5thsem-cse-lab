//wap to read and display contents of an array and find max and min using cpp
//wap to read and display contents of an array in rev order using pointers
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int n;
  cin>>n;
  int a[100];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int max=a[0];
  int min=0;
  for(int i=0;i<n;i++){
    cout<<a[i]<<' ';
  }
  cout<<endl;
  sort(a,a+n);
  min = a[0];
  max = a[n-1];
  cout<<max<<endl;
  cout<<min<<endl;
  return 0;
}
