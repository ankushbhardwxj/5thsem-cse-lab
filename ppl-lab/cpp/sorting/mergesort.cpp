#include<iostream>
using namespace std;

void merge(int a[], int l, int m, int r){
    //divide array a[] into L[] and R[]
    //set smaller of two stacks to A till sentinal is reached
    int L[10], R[10];
    int n1 = m - l + 1; //number of element in left = middle - left
    int n2 = r - m; //number of element in right = right - middle
    for(int i=0;i<n1;i++){
        L[i] = a[l+i]; 
    }
    for(int j=0;j<n2;j++){
        R[j] = a[m+1+j];
    }
    int i,j,k; i = j = 0;
    k = l;
    //Merge smaller elements of L and R into A
    while (i<n1 && j<n2){
        if(L[i]<=R[j]){
            a[k] = L[i];
            i++;
        }else{
            a[k] = R[j];
            j++;
        }
        k++;
    }
    //Copy remaining elements
    while(i<n1){
        a[k] = L[i];
        i++;k++;
    }
    while(j<n2){
        a[k] = R[j];
        j++;k++;
    }
}

void merge_sort(int a[], int l, int r){
    if(l<r){
        int m = (l + r) / 2;
        merge_sort(a,l,m);
        merge_sort(a,m+1,r);
        merge(a,l,m,r);
    }
}

int main(){
    int a[10] = {8,6,2,3,7,5};
    int n = 6;
    int key;
   //Algorithm here
    int l,r;
    l = 0; r = n-1;
    merge_sort(a,l,r);

    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
    return 0;
}