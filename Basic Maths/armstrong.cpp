#include<iostream>
#include<math.h>
using namespace std;

main(){
    int n=153;
    int dub=n,sum=0,count=0;
    while (n>0)
    {
        count++;
        n/=10;   
    }
    int dub2=dub;
    while (dub2>0)
    {
        int last = dub2%10;
        last=pow(last,count);
        dub2/=10;
        sum=sum+last;
    }
    cout<<sum;
    // cout<<sum;
    if(sum==dub) cout<<"true";
    else cout<<"false";
}