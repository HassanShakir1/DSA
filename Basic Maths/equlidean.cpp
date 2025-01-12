#include<iostream>
using namespace std;

main(){
    int n=52,n2=10;
    while (n>0 && n2>0)
    {
       if (n>n2)
       {
        n=n%n2;
       }else n2=n2%n;
       
    }
    // cout<<sum;
    if(n==0) cout<<n2;
    else cout<<n;
}