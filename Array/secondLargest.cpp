#include<bits/stdc++.h>
using namespace std;
// second largest
// int main(){
//     int arr[6]={2,3,1,5,7,6};
//     int largest=arr[0];
//     int sLargest=-1;
//     for (int i = 0; i < 6; i++)
//     {
//         if(largest<arr[i]){
//         sLargest=largest;
//         largest=arr[i];
//         }else if (largest>arr[i] && sLargest<arr[i])
//         {
//             sLargest=arr[i];
//         }
        
//     }
//     cout<<"\n Largest : "<<largest<<" Second Largest : "<<sLargest;
// }
int main(){
    int arr[6]={2,3,1,5,7,6};
    int smallest=arr[0];
    int sSmallest=INT_MAX;
    for (int i = 0; i < 6; i++)
    {
        if(smallest>arr[i]){
        sSmallest=smallest;
        smallest=arr[i];
        }else if (smallest!=arr[i] && sSmallest>arr[i])
        {
            sSmallest=arr[i];
        }
        
    }
    cout<<"\n smallest : "<<smallest<<" Second smallest : "<<sSmallest;
}