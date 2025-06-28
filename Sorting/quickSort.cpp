#include <bits/stdc++.h>
using namespace std;

int quickSort(vector<int> &arr, int low, int high) {
    int pivot=arr[low];
    int left=low;
    int right=high;
    while (left<right)
    {
        while(arr[left]<=pivot && left<=high-1){
            left++;
        }
        while (arr[right]>pivot && right>= low+1)
        {
            right--;
        }
        if(left<right){
            swap(arr[left],arr[right]);
        }
    }
    swap(arr[low],arr[right]);
    return right;
    
}

void ms(vector<int> &arr, int low, int high) {
    if (low < high){
    int pIndex =quickSort(arr,low,high) ;
    ms(arr,low,pIndex-1);
    ms(arr, pIndex+1, high);
    }
}

int main() {
    vector<int> arr;
    int n = 9;
    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;
        arr.push_back(number);
    }

    ms(arr, 0, n - 1);

    cout << "Sorted array:\n";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
