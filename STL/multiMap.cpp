#include <iostream>
#include <map>

using namespace std;

int main() {
    // Declare a multimap with integer keys and string values
    multimap<int, string> myMultiMap;

    // Insert elements into the multimap
    myMultiMap.insert({1, "Apple"});
    myMultiMap.insert({2, "Banana"});
    myMultiMap.insert({1, "Apricot"});  // Duplicate key
    myMultiMap.insert({3, "Cherry"});
    myMultiMap.insert({2, "Blueberry"});  // Duplicate key
    myMultiMap.insert({4, "Date"});

    // Display elements in the multimap
    cout << "Elements in the multimap (sorted by keys):" << endl;
    for (const auto &pair : myMultiMap) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    // Count occurrences of a key
    int key = 2;
    cout << "\nCount of key " << key << ": " << myMultiMap.count(key) << endl;

    // Find all elements with a specific key using equal_range
    cout << "\nValues associated with key " << key << ":" << endl;
    auto range = myMultiMap.equal_range(key);
    for (auto it = range.first; it != range.second; ++it) {
        cout << it->second << " ";
    }
    cout << endl;

    // Erase all elements with a specific key
    myMultiMap.erase(1);
    cout << "\nAfter erasing key 1, the multimap contains:" << endl;
    for (const auto &pair : myMultiMap) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    // Using lower_bound and upper_bound
    int queryKey = 3;
    auto lb = myMultiMap.lower_bound(queryKey);
    auto ub = myMultiMap.upper_bound(queryKey);

    if (lb != myMultiMap.end()) {
        cout << "\nLower bound of key " << queryKey << ": " << lb->first << " -> " << lb->second << endl;
    } else {
        cout << "\nLower bound of key " << queryKey << ": Not found (end of multimap)" << endl;
    }

    if (ub != myMultiMap.end()) {
        cout << "Upper bound of key " << queryKey << ": " << ub->first << " -> " << ub->second << endl;
    } else {
        cout << "Upper bound of key " << queryKey << ": Not found (end of multimap)" << endl;
    }

    // Clear the multimap
    myMultiMap.clear();
    cout << "\nAfter clearing, size of the multimap: " << myMultiMap.size() << endl;

    return 0;
}
