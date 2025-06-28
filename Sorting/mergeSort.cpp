#include <bits/stdc++.h>
using namespace std;

void mergeSort(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high) {
        if (arr[left] < arr[right]) {
            temp.push_back(arr[left++]);
        } else {
            temp.push_back(arr[right++]);
        }
    }

    while (left <= mid) temp.push_back(arr[left++]);
    while (right <= high) temp.push_back(arr[right++]);

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void ms(vector<int> &arr, int low, int high) {
    if (low >= high) return;

    int mid = (low + high) / 2;
    ms(arr, low, mid);
    ms(arr, mid + 1, high);
    mergeSort(arr, low, mid, high);
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
