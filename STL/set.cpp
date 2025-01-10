#include <iostream>
#include <set> // Include the set header

using namespace std;

int main() {
    // Declare a set of integers
    set<int> mySet;

    // Adding elements to the set
    mySet.insert(10);
    mySet.insert(5);
    mySet.insert(20);
    mySet.insert(10); // Duplicate, won't be added

    cout << "Elements in the set (sorted order): ";
    for (int x : mySet) {
        cout << x << " ";
    }
    cout << endl;

    // Check if an element exists
    int key = 10;
    if (mySet.find(key) != mySet.end()) {
        cout << key << " is present in the set." << endl;
    } else {
        cout << key << " is not present in the set." << endl;
    }

    // Erasing an element
    mySet.erase(5);
    cout << "After erasing 5, the set contains: ";
    for (int x : mySet) {
        cout << x << " ";
    }
    cout << endl;

    // Getting the size of the set
    cout << "Size of the set: " << mySet.size() << endl;

    // Clear all elements in the set
    mySet.clear();
    cout << "Is the set empty? " << (mySet.empty() ? "Yes" : "No") << endl;

    // Using a set of strings
    set<string> stringSet = {"Alice", "Bob", "Charlie"};
    stringSet.insert("David");

    cout << "Set of strings: ";
    for (const string& str : stringSet) {
        cout << str << " ";
    }
    cout << endl;

    // Reverse-order set using std::greater
    set<int, greater<int>> descendingSet;
    descendingSet.insert(10);
    descendingSet.insert(5);
    descendingSet.insert(20);

    cout << "Set in descending order: ";
    for (int x : descendingSet) {
        cout << x << " ";
    }
    cout << endl;

     set<int> mySet2 = {10, 20,25, 30, 40, 50};

    cout << "Elements in the set: ";
    for (int x : mySet2) {
        cout << x << " ";
    }
    cout << endl;

    // Find lower bound
    int lbValue = 25;
    auto lb = mySet2.lower_bound(lbValue);
    lb--;
    if (lb != mySet2.end()) {
        cout << "Lower bound of " << lbValue << ": " << *lb << endl;
    } else {
        cout << "Lower bound of " << lbValue << ": Not found (end of set)" << endl;
    }

    // Find upper bound
    int ubValue = 30;
    auto ub = mySet2.upper_bound(ubValue);
    if (ub != mySet2.end()) {
        cout << "Upper bound of " << ubValue << ": " << *ub << endl;
    } else {
        cout << "Upper bound of " << ubValue << ": Not found (end of set)" << endl;
    }

    // Example with a value not in the set
    int queryValue = 45;
    lb = mySet2.lower_bound(queryValue);
    ub = mySet2.upper_bound(queryValue);

    cout << "Query value: " << queryValue << endl;
    if (lb != mySet2.end()) {
        cout << "Lower bound: " << *lb << endl;
    } else {
        cout << "Lower bound: Not found (end of set)" << endl;
    }

    if (ub != mySet2.end()) {
        cout << "Upper bound: " << *ub << endl;
    } else {
        cout << "Upper bound: Not found (end of set)" << endl;
    }

    return 0;

}
