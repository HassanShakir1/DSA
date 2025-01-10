#include <iostream>
#include <set>

using namespace std;

int main() {
    // Declare a multiset of integers
    multiset<int> myMultiSet;

    // Adding elements to the multiset
    myMultiSet.insert(10);
    myMultiSet.insert(20);
    myMultiSet.insert(10); // Duplicate is allowed
    myMultiSet.insert(30);
    myMultiSet.insert(20);

    cout << "Elements in the multiset: ";
    for (int x : myMultiSet) {
        cout << x << " ";
    }
    cout << endl;

    // Count occurrences of a value
    int key = 10;
    cout << "Count of " << key << ": " << myMultiSet.count(key) << endl;

    // Erase a specific value (all occurrences)
    myMultiSet.erase(20);
    cout << "After erasing 20, the multiset contains: ";
    for (int x : myMultiSet) {
        cout << x << " ";
    }
    cout << endl;

    // Inserting more elements
    myMultiSet.insert(40);
    myMultiSet.insert(50);

    // Find lower bound and upper bound
    int queryValue = 30;
    auto lb = myMultiSet.lower_bound(queryValue);
    auto ub = myMultiSet.upper_bound(queryValue);

    if (lb != myMultiSet.end()) {
        cout << "Lower bound of " << queryValue << ": " << *lb << endl;
    } else {
        cout << "Lower bound of " << queryValue << ": Not found (end of multiset)" << endl;
    }

    if (ub != myMultiSet.end()) {
        cout << "Upper bound of " << queryValue << ": " << *ub << endl;
    } else {
        cout << "Upper bound of " << queryValue << ": Not found (end of multiset)" << endl;
    }

    // Iterating through all elements in reverse order
    cout << "Elements in reverse order: ";
    for (auto it = myMultiSet.rbegin(); it != myMultiSet.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
