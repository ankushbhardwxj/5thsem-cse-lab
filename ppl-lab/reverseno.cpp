#include<iostream>
using namespace std;

int main(){
  int num;
  cin>>num;
  int temp;
  while(num>0){
    temp = num % 10;
    cout<<temp;
    num=num/10;
  }
  return 0;
}
