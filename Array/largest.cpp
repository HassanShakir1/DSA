#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[6]={2,3,1,5,7,6};
    int largest=arr[0];
    for (int i = 0; i < 6; i++)
    {
        if(largest<arr[i])
        largest=arr[i];
    }
    cout<<largest;
}