#include<iostream>
using namespace std;
main(){
    for (int i = 0; i < 5; i++)
    {
        for (char j = 'E'-i; j<='E'; j++)
        {
            cout<<j<<" "; 
        }
        cout<<endl;
    }
    
}