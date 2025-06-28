#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=9;
    int arr[n]={1,1,0,0,1,1,1,0,1};
    int max1=0,count=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==1)
        {
            count++;
        }else{
            max1=max(max1,count);
            count=0;
        }
        
    }
    cout<<"\n max occurance : "<<max1;
    
}