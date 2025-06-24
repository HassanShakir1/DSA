#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int max=0;
    for (int i = 0; i < n; i++)
    {
        if(max<arr[i])
        max=arr[i];
    }
    
    int hash[max]={0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]+=1;
    }
    

    int q;
    cin>>q;
    while (q--)
    {
        int num;
        cin>>num;
        cout<<"\n occurnace "<<hash[num];
    }
    
    
}