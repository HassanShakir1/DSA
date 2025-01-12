#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;

main(){
    int n=36;
    vector<int> p;
    // for (int i = 1; i <= n; i++)
    // {
    //     if(n%i==0)
    //     cout<<i<<" ";
    // }
    for (int i = 1; i <= sqrt(n); i++)
    {
        if(n%i==0){
            p.push_back(i);
            if (n/i !=i)
            {
                p.push_back(n/i);
            }
        }
    }
    sort(p.begin(),p.end());
    for (auto it : p)
    {
        cout<<it<<" ";
    }
    
}