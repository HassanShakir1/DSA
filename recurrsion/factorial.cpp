#include<iostream>
using namespace std;

int f(int i){
    if(i==0){
        return 1;
    }
    return i*f(i-1);
}

main(){
    int n;
    cin>>n;
    int sum=f(n);
    cout<<"sum : "<<sum;
}