#include<iostream>
using namespace std;

void swap( int *a , int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
} 

int reverse(int a[], int n){
  int *p = a;
  int *p2 = a + n - 1;
  while(p<p2){
    swap(p,p2);
    p++;
    p2--;
  }
}
int main(){
  int n;
  cin>>n;
  int a[100];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  reverse(a,n);
  for(int i=0;i<n;i++){
    cout<<a[i]<<' ';
  }
  return 0;
}
