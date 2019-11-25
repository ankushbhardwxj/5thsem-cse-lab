#include<iostream>
using namespace std;

int main(){
  int num;
  cin>>num;
  int sum = 0;
  int temp=0;
  while(num>0){
    temp = num % 10;
    num = num / 10;
    sum += temp;
  }
  cout<<sum<<endl;
  return 0;
}
