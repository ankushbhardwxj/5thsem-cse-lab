#include<iostream>
using namespace std;

int main(){
  int n;cin>>n;
  int x = 0;
  int y = 1;
  cout<<x<<' ';
  int fib=0;
  while(n--){
    fib = x + y;
    y = x;
    x = fib;
    cout<<fib<<' ';
  }
  return 0;
}
