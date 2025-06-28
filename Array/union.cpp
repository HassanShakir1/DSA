#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int arr[10]={1,0,0,5,6,0,2,3,4,8};
//     int arr2[6]={2,4,6,8,10,12};
//     set<int> s;
//     for (int i = 0; i < 10; i++)
//     {
//        s.insert(arr[i]);
//     }
//     for (int i = 0; i < 6; i++)
//     {
//         s.insert(arr2[i]);

//     }
//     int union_arr[s.size()];
//     int index = 0;
//     for (int num : s) {
//         union_arr[index++] = num;
//     }
//     cout<<"\n array  rotated : ";
//     for (int i = 0; i < s.size(); i++)
//     {
//         cout<<" "<<union_arr[i];
//     }
// }

//optimal solution

int main(){
    int arr[10]={1,2,3,5,6,7};
    int arr2[6]={2,4,6,8,10,12};
    vector<int> v;
    int i=0;
    int j=0;
    while (i<10 && j<6)
    {
        if(arr[i]<=arr2[j]){
            if(v.size()==0 || v.back()!=arr[i]){
                v.push_back(arr[i]);
            }
            i++;
        }else{
            if(v.size()==0 || v.back()!=arr2[j]){
                v.push_back(arr2[j]);
            }
            j++;
        }
    }
    while (i<10)
    {
        if(arr[i]<=arr2[j]){
            if(v.size()==0 || v.back()!=arr[i]){
                v.push_back(arr[i]);
            }
            i++;
        }
    }

    while (j<6)
    {
        if(arr[i]<=arr2[j]){
            if(v.size()==0 || v.back()!=arr2[j]){
                v.push_back(arr2[j]);
            }
            j++;
        }
    }
    
    
    cout<<"\n array  rotated : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<" "<<v[i];
    }
}