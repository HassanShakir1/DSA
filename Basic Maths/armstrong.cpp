#include<iostream>
using namespace std;

main(){
    int n=371;
    int dub=n,sum=0;
    while (n>0)
    {
        int last = n%10;
        sum=sum+(last*last*last);
        n/=10;   
    }
    // cout<<sum;
    if(sum==dub) cout<<"true";
    else cout<<"false";
}