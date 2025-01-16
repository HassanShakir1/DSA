#include<iostream>
using namespace std;

void f(int i,int n){
    if(i>2*n){
        return;
    }
    f(i+1,n);
    cout<<i-n<<endl;
}

main(){
    int n;
    cin>>n;
    f(n,n);
}