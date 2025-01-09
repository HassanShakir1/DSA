#include <iostream>
#include <vector>    
#include <string> 
using namespace std;

int main()
{
    // vector<int>p={1,2};
    // cout<<"element \n";
    // for (int val : p)
    // {
    //     cout<<val<<" ";
    // }
    
    // vector<int>p(5,6);
    // cout<<"element \n";
    // for (int val : p)
    // {
    //     cout<<val<<" ";
    // }
    vector<int>p;
    p.push_back(5);
    p.push_back(7);
    p.pop_back();
    p.emplace_back(8);
    cout<<"element \n";
    for (int val : p)
    {
        cout<<val<<" ";
    }
    cout<<"bak \n";
    // p.erase(p.begin()+1);
    // p.insert(p.begin()+1,20);
    p.insert(p.begin()+1,3,40);
    for (vector<int>::iterator it=p.begin();it !=p.end();it++)
    {
        cout<<*(it)<<" ";
    }
    
    return 0;
}
