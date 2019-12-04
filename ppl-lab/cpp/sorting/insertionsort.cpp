
#include<iostream>
using namespace std;

int main(){
    int a[10] = {8,6,2,3,7,5};
    int n = 6;
    int key;
   //Algorithm here
   //for a pos i, move key from right to correct position in left
   for(int j=1;j<n;j++){
       key = a[j];
       int i = j - 1;
       while (i>=0 && a[i]>key){
           a[i+1] = a[i];
           i--;
       }
       a[i+1] = key;
   }


    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
    return 0;
}