#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[4]={1,2,4,5};
    int n=5-1;
    int xor1=0,xor2=0;
    for (int i = 0; i < 4; i++)
    {
        xor1^=arr[i];
        xor2^=(i+1);
    }
    xor2^=5;
    int ans =xor1^xor2;
    cout<<"\n ans : "<<ans;
    
}