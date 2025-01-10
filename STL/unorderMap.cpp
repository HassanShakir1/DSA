#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    // Declare an unordered_map with string keys and integer values
    unordered_map<string, int> myUnorderedMap;

    // Insert elements into the unordered_map
    myUnorderedMap["Alice"] = 25;
    myUnorderedMap["Bob"] = 30;
    myUnorderedMap["Charlie"] = 35;

    // Insert using insert() method
    myUnorderedMap.insert({"Diana", 40});

    // Display the unordered_map
    cout << "Elements in the unordered_map:" << endl;
    for (const auto &pair : myUnorderedMap) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    // Access a value by key
    cout << "\nAge of Bob: " << myUnorderedMap["Bob"] << endl;

    // Modify a value
    myUnorderedMap["Alice"] = 28;
    cout << "Updated age of Alice: " << myUnorderedMap["Alice"] << endl;

    // Check if a key exists
    string key = "Charlie";
    if (myUnorderedMap.find(key) != myUnorderedMap.end()) {
        cout << key << " is found with value: " << myUnorderedMap[key] << endl;
    } else {
        cout << key << " is not found" << endl;
    }

    // Erase an element by key
    myUnorderedMap.erase("Diana");
    cout << "\nAfter erasing Diana, the unordered_map contains:" << endl;
    for (const auto &pair : myUnorderedMap) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    // Iterating using iterators
    cout << "\nIterating with iterators:" << endl;
    for (auto it = myUnorderedMap.begin(); it != myUnorderedMap.end(); ++it) {
        cout << it->first << " -> " << it->second << endl;
    }

    // Size of the unordered_map
    cout << "\nSize of the unordered_map: " << myUnorderedMap.size() << endl;

    // Clear all elements
    myUnorderedMap.clear();
    cout << "After clearing, size of the unordered_map: " << myUnorderedMap.size() << endl;

    return 0;
}
