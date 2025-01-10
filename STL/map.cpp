#include <iostream>
#include <map>

using namespace std;

int main() {
    // Declare a map with integer keys and string values
    map<int, string> myMap;

    // Insert elements into the map
    myMap[1] = "Apple";
    myMap[3] = "Banana";
    myMap[2] = "Cherry";
    myMap[5] = "Date";
    myMap[4] = "Elderberry";

    // Display elements in the map
    cout << "Elements in the map (sorted by keys):" << endl;
    for (const auto &pair : myMap) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    // Access elements by key
    int key = 3;
    if (myMap.find(key) != myMap.end()) {
        cout << "Value at key " << key << ": " << myMap[key] << endl;
    } else {
        cout << "Key " << key << " not found." << endl;
    }

    // Check if a key exists
    key = 6;
    if (myMap.find(key) != myMap.end()) {
        cout << "Key " << key << " exists in the map." << endl;
    } else {
        cout << "Key " << key << " does not exist in the map." << endl;
    }

    // Erase an element by key
    myMap.erase(3);
    cout << "After erasing key 3, the map contains:" << endl;
    for (const auto &pair : myMap) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    // Size of the map
    cout << "Size of the map: " << myMap.size() << endl;

    // Using lower_bound and upper_bound
    int queryKey = 4;
    auto lb = myMap.lower_bound(queryKey);
    auto ub = myMap.upper_bound(queryKey);

    if (lb != myMap.end()) {
        cout << "Lower bound of key " << queryKey << ": " << lb->first << " -> " << lb->second << endl;
    } else {
        cout << "Lower bound of key " << queryKey << ": Not found (end of map)" << endl;
    }

    if (ub != myMap.end()) {
        cout << "Upper bound of key " << queryKey << ": " << ub->first << " -> " << ub->second << endl;
    } else {
        cout << "Upper bound of key " << queryKey << ": Not found (end of map)" << endl;
    }

    // Clear the map
    myMap.clear();
    cout << "After clearing, size of the map: " << myMap.size() << endl;

    return 0;
}
