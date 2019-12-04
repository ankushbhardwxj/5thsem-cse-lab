#include<iostream>
using namespace std;

int main(){
    int a[10] = {8,6,2,3,7,5};
    int n = 6;
    int key;
   //Algorithm here
    //for a position i, get the smallest element and swap
   for(int i=0;i<n;i++){
       int MIN = 1000000;
       int pos;
       for(int j=i;j<n;j++){
           if(a[j]<MIN){
               MIN = a[j];
               pos = j;
           }
       }
       swap(a[i],a[pos]);
   }


    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
    return 0;
}