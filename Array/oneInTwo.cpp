#include<bits/stdc++.h>
using namespace std;
//optimal
// int main(){
//     int n=9;
//     int arr[n]={1,1,2,3,3,4,4,5,5};
//     int xor1=0;
//     for (int i = 0; i < n; i++)
//     {
//         xor1^=arr[i];
//     }
//     cout<<"\n ans : "<<xor1;

// }

//better
int main(){
    int n=9;
    int arr[n]={1,1,2,3,3,4,4,5,5};
    map<long long,int> check;
    for (int i = 0; i < n; i++)
    {
        check[arr[i]]++;
    }
    for (auto &i: check)
    {
        if(i.second==1){
            cout<<"\n ans "<<i.first;
            break;
        }
    }
    
      
}