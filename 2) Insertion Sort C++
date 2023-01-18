#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n){
    int i,j,key;
    for(j=1;j<n;j++){
        key=arr[j];
        i=j-1;
        while(i>=0 && arr[i]>key){
            arr[i+1]=arr[i];
            i--;
        }
        arr[i+1]=key;
    }
}

int main()
{
    int arr[]={8,4,13,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, n);
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}

//op = 4 7 8 9 13
