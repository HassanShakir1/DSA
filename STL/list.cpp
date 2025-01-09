#include <iostream>
#include <list> // Include the list header file

using namespace std;

int main() {
    // Create a list of integers
    list<int> myList;

    // Adding elements
    myList.push_back(10);  // Add to the back
    myList.push_back(20);
    myList.push_back(30);
    myList.push_front(5);  // Add to the front
    // myList.insert(myList.end(),2,50);
    cout << "List after push operations: ";
    for (int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    // Accessing front and back
    cout << "Front element: " << myList.front() << endl;
    cout << "Back element: " << myList.back() << endl;

    // Removing elements
    myList.pop_front();  // Remove from the front
    myList.pop_back();   // Remove from the back

    cout << "List after pop operations: ";
    for (int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    // Inserting elements
    auto it = myList.begin(); // Iterator to the beginning of the list
    ++it;                     // Move iterator to the second position
    myList.insert(it, 15);    // Insert 15 at the second position

    cout << "List after insertion: ";
    for (int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    // Removing elements by value
    myList.remove(15);  // Remove all occurrences of 15
    cout << "List after removing 15: ";
    for (int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    // Sorting the list
    myList.push_back(25);
    myList.push_back(5);  // Add duplicates for sorting
    myList.sort();        // Sort the list in ascending order

    cout << "List after sorting: ";
    for (int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    // Reversing the list
    myList.reverse();  // Reverse the list

    cout << "List after reversing: ";
    for (int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    // Clearing the list
    myList.clear(); // Remove all elements
    cout << "Is the list empty? " << (myList.empty() ? "Yes" : "No") << endl;

    // Working with a list of strings
    list<string> stringList = {"Alice", "Bob", "Charlie"};

    cout << "String List: ";
    for (const string& name : stringList) {
        cout << name << " ";
    }
    cout << endl;

    // Nested list example
    list<list<int>> nestedList;

    // Adding lists to the nested list
    nestedList.push_back({1, 2, 3});
    nestedList.push_back({4, 5, 6});
    nestedList.push_back({7, 8, 9});

    cout << "Nested List Elements:\n";
    for (const auto& subList : nestedList) {
        for (int val : subList) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
