#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int n){
    for(int i=0;i<n;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        swap(arr[min_index], arr[i]);
    }
}

int main()
{
    int arr[]={15,18,27,11,35};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}
