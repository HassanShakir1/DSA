#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    // Declare an unordered_set of integers
    unordered_set<int> mySet;

    // Insert elements into the unordered_set
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);
    mySet.insert(20); // Duplicate (ignored)
    mySet.insert(40);

    cout << "Elements in the unordered_set: ";
    for (int x : mySet) {
        cout << x << " ";
    }
    cout << endl;

    // Check if an element exists
    int key = 30;
    if (mySet.find(key) != mySet.end()) {
        cout << "Element " << key << " is present in the unordered_set." << endl;
    } else {
        cout << "Element " << key << " is not present in the unordered_set." << endl;
    }

    // Erase an element
    mySet.erase(20);
    cout << "After erasing 20, the unordered_set contains: ";
    for (int x : mySet) {
        cout << x << " ";
    }
    cout << endl;

    // Size of the unordered_set
    cout << "Size of the unordered_set: " << mySet.size() << endl;

    // Clearing all elements
    mySet.clear();
    cout << "After clearing, size of the unordered_set: " << mySet.size() << endl;

    return 0;
}
