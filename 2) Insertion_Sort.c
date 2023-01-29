#include <stdio.h>
int main()
{
    int arr[]={12,56,45,18,90,-112,345};
    int n=sizeof(arr)/sizeof(arr[0]);
    int temp=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<=arr[i]){
               temp=arr[j];
               arr[j]=arr[i];
               arr[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    return 0;
}

// op: -112 12 18 45 56 90 345
