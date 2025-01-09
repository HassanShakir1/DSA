#include <iostream>
#include <queue>
#include <vector>
#include <functional> // For std::greater

using namespace std;

int main() {
    // Max-Heap (default behavior)
    priority_queue<int> maxHeap;

    // Adding elements to the max-heap
    maxHeap.push(10);
    maxHeap.push(5);
    maxHeap.push(20);

    cout << "Max-Heap (largest to smallest): ";
    while (!maxHeap.empty()) {
        cout << maxHeap.top() << " "; // Access the largest element
        maxHeap.pop();                // Remove the largest element
    }
    cout << endl;

    // Min-Heap using std::greater
    priority_queue<int, vector<int>, greater<int>> minHeap;

    // Adding elements to the min-heap
    minHeap.push(10);
    minHeap.push(5);
    minHeap.push(20);

    cout << "Min-Heap (smallest to largest): ";
    while (!minHeap.empty()) {
        cout << minHeap.top() << " "; // Access the smallest element
        minHeap.pop();                // Remove the smallest element
    }
    cout << endl;

    // Using a custom comparator for a priority queue of pairs
    priority_queue<pair<int, int>> maxPairHeap; // Max-Heap for pairs
    maxPairHeap.push({3, 100});
    maxPairHeap.push({1, 200});
    maxPairHeap.push({2, 300});

    cout << "Max-Heap of pairs (sorted by first value): ";
    while (!maxPairHeap.empty()) {
        auto p = maxPairHeap.top();
        cout << "(" << p.first << ", " << p.second << ") ";
        maxPairHeap.pop();
    }
    cout << endl;

    // Min-Heap for pairs using custom comparator
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minPairHeap;
    minPairHeap.push({3, 100});
    minPairHeap.push({1, 200});
    minPairHeap.push({2, 300});

    cout << "Min-Heap of pairs (sorted by first value): ";
    while (!minPairHeap.empty()) {
        auto p = minPairHeap.top();
        cout << "(" << p.first << ", " << p.second << ") ";
        minPairHeap.pop();
    }
    cout << endl;

    return 0;
}
