#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;

main(){
    int n=11;
    int n2=13,gcd=0;
    for (int i = 1; i <= min(n,n2); i++)
    {
        if(n%i==0 && n2%i==0)
        gcd=i;
    }
    cout<<gcd;      
}