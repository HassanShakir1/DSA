#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;

main(){
    int n=13;
    int count=0;
    // vector<int> p;
    // for (int i = 1; i <= n; i++)
    // {
    //     if(n%i==0)
    //     count++;
    // }
    
    for (int i = 1; i <= sqrt(n); i++)
    {
        if(n%i==0){
            count++;
            if (n/i !=i)
            {
                count++;
            }
        }
    }
    
    if (count==2)
    {
        cout<<"prime";
    }else cout<<"false";
}