#include<iostream>
using namespace std;

int main(){
    int a[10] = {8,6,2,3,7,5};
    int n = 6;
    int key;
   //Algorithm here
    //for a position i, swap adjacent elements greater than i, if they are out of order
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            if(a[j]<a[j-1]){
                swap(a[j],a[j-1]);
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
    return 0;
}