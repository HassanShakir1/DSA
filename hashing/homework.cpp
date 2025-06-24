#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    };
    map<int,int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
   int mx = arr[0], mn = arr[0]; // elements that will end up most-/least-frequent
    int mxFreq = m[mx], mnFreq = m[mn];

    for (int i = 0; i < n; ++i) {
        int f = m[arr[i]];        // current element’s frequency
        if (f > mxFreq) {         // more frequent → update “max”
            mxFreq = f;
            mx = arr[i];
        }
        if (f < mnFreq) {         // less frequent → update “min”
            mnFreq = f;
            mn = arr[i];
        }
    }

    cout << "max : " << mx << '\n'
         << "min : " << mn << '\n';
    
}