#include<bits/stdc++.h>
using namespace std;

bool palindrome(int i,char arr[],int n){
    if(arr[i]!=arr[n-i-1]){
        return false;
    }
    if(i>=n/2)
    return true;
    palindrome(i+1,arr,n);
}

main(){
    int n=5;
    char arr[n]={'m','a','d','s','m'};
    if(palindrome(0,arr,n)){
        cout<<"yes";
    }else cout<<"no";
    
}