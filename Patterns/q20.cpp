#include<iostream>
using namespace std;
main(){
    int spaces=8;
    for (int i = 0; i < 2*5-1; i++)
    {
        int stars = i < 5 ? i + 1 : 2 * 5 - i - 1;
        
        for (int j = 1; j<=stars; j++)
        {
            cout<<"*";
        }
        for (int j = 1; j <=spaces; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j<=stars; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        if (i < 5-1 ) {
            spaces -= 2; // Decrease spaces for the upper half
        } else {
            spaces += 2; // Increase spaces for the lower half
        }
    }
}