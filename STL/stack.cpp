#include <iostream>
#include <stack> // Include the stack header file

using namespace std;

int main() {
    // Create a stack of integers
    stack<int> myStack;

    // Adding elements (push)
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    cout << "Stack after pushing elements (top to bottom): ";
    stack<int> tempStack = myStack; // Temporary stack to display elements
    while (!tempStack.empty()) {
        cout << tempStack.top() << " ";
        tempStack.pop();
    }
    cout << endl;

    // Accessing the top element
    cout << "Top element: " << myStack.top() << endl;

    // Removing elements (pop)
    myStack.pop();
    cout << "Stack after popping the top element: ";
    tempStack = myStack; // Reset tempStack to display elements
    while (!tempStack.empty()) {
        cout << tempStack.top() << " ";
        tempStack.pop();
    }
    cout << endl;

    // Checking if the stack is empty
    cout << "Is the stack empty? " << (myStack.empty() ? "Yes" : "No") << endl;

    // Size of the stack
    cout << "Current size of the stack: " << myStack.size() << endl;

    // Using a stack of strings
    stack<string> stringStack;
    stringStack.push("Alice");
    stringStack.push("Bob");
    stringStack.push("Charlie");

    cout << "Stack of strings (top to bottom): ";
    stack<string> tempStringStack = stringStack; // Temporary stack for display
    while (!tempStringStack.empty()) {
        cout << tempStringStack.top() << " ";
        tempStringStack.pop();
    }
    cout << endl;

    // Nested stack example
    stack<stack<int>> nestedStack;

    // Adding stacks to the nested stack
    stack<int> subStack1;
    subStack1.push(1);
    subStack1.push(2);
    subStack1.push(3);

    stack<int> subStack2;
    subStack2.push(4);
    subStack2.push(5);

    nestedStack.push(subStack1);
    nestedStack.push(subStack2);

    cout << "Nested Stack Elements:\n";
    while (!nestedStack.empty()) {
        stack<int> subStack = nestedStack.top();
        nestedStack.pop();
        cout << "Sub-stack (top to bottom): ";
        while (!subStack.empty()) {
            cout << subStack.top() << " ";
            subStack.pop();
        }
        cout << endl;
    }

    return 0;
}
