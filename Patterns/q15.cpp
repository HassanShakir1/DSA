#include<iostream>
using namespace std;
main(){
    for (int i = 0; i < 5; i++)
    {
        char a='A';
        for (int j = 0; j<5-i; j++)
        {
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
    
}