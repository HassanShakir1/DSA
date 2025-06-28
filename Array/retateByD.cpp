#include<bits/stdc++.h>
using namespace std;
//brute force approct
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int d;
//     cin>>d;
//     d= d%5;
//     for (int j = 0; j < d; j++)
//     {
//             int temp=arr[0];

//             for (int i = 1; i < 5; i++)
//             {
//                 arr[i-1]=arr[i];
//             }
//             arr[4]=temp;
//     }
    
//     cout<<"\n array  rotated : ";
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<" "<<arr[i];
//     }
    
    
// }

//optimal approach

int main(){
    int arr[]={1,2,3,4,5};
    int d;
    cin>>d;
    d=d%5;
    reverse(arr,arr+d);
    reverse(arr+d,arr+5);
    reverse(arr,arr+5);
        cout<<"\n array  rotated : ";
    for (int i = 0; i < 5; i++)
    {
        cout<<" "<<arr[i];
    }
    
}