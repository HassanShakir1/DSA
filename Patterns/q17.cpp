#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5-i-1; j++)
        {
            cout<<" ";
        }
        char a='A';
        int breakPoint=(2*i)/2;
        for (int k = 0; k < (2*i+1); k++)
        {
            cout<<a;
            if(k<breakPoint)a++;
            else a--;
        }
        for (int j = 0; j < 5-i-1; j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}

