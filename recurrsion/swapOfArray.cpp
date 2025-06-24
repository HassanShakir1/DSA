#include<bits/stdc++.h>
using namespace std;

void swapingArray(int i,int arr[],int n){
    if(i>=n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    swapingArray(i+1,arr,n);
}

main(){
    int n=5;
    int arr[n]={5,3,2,1,0};
    swapingArray(0,arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}