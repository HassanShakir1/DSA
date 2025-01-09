#include<iostream>
using namespace std;
main(){
    int spaces=0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j<5-i; j++)
        {
            cout<<"*";
        }
        for (int j = 0; j <spaces; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j<5-i; j++)
        {
            cout<<"*";
        }
        spaces+=2;
        cout<<endl;
    }
    spaces=8;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j<=i; j++)
        {
            cout<<"*";
        }
        for (int j = 0; j <spaces; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j<=i; j++)
        {
            cout<<"*";
        }
        spaces-=2;
        cout<<endl;
    }
}