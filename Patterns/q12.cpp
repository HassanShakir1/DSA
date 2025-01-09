#include<iostream>
using namespace std;
main(){
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j<=i; j++)
        {
            cout<<j+1;
        }
        for (int j = 0; j < 2*5-(2*i+1); j++)
        {
            cout<<" ";
        }
        for (int j = 0; j<=i; j++)
        {
            cout<<j+1;
        }
        cout<<endl;
    }
    
}