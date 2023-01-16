#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n){
    // int ol -> outer loop,il -> inner loop;
    for(int ol=0;ol<n-1;ol++){
        for(int il=0;il<n-ol-1;il++){
            if(arr[il]>arr[il+1]) swap(arr[il], arr[il+1]);
        }
    }
}

int main()
{
    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}

//output: 1 2 3 4 5
