#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[1000];
  for(int i=0;i<n;i++)cin>>a[i];
  int beg=0,end,add,val,mid,pos,l;
  cout<<"Enter value to be searched: ";
  cin>>val;
  end = n-1;
  while(beg<=end){
    mid = (beg+end)/2;
    if(val == a[mid]){
      pos=mid;
      cout<<"Element present"<<endl;
      cout<<"Position of element"<<pos<<endl;
      exit(0);
    }
    else if(val>a[mid])
    beg=mid+1;
    else
    end=mid-1;
  }
  if(beg>end)
  cout<<"Element not found"<<endl;

  return 0;
}
