#include<iostream>
using namespace std;

int main(){
  string n; cin>>n;
  int flag = 0;
  for(int i=0,j=n.length()-1;i<n.length(),j>=0;i++,j--){
    if(n[i]!=n[j]) flag=1;
  }
  if(flag==0) cout<<"palindrome";
  else cout<<"not palindrome";
  return 0;
}
