#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10]={1,0,0,5,6,0,2,3,4,8};
    int j=-1;
    for (int i = 0; i < 10; i++)
    {
        if(arr[i]==0){
        j=i;
        break;
        }
    }
    for (int i = j+1; i < 10; i++)
    {
        if(arr[i]!=0){
        swap(arr[i],arr[j]);
        j++;
        }
    }
    cout<<"\n array  rotated : ";
    for (int i = 0; i < 10; i++)
    {
        cout<<" "<<arr[i];
    }
}