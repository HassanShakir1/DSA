#include <iostream>
#include <queue> // Include the queue header file

using namespace std;

int main() {
    // Create a queue of integers
    queue<int> myQueue;

    // Adding elements (enqueue using push)
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    cout << "Queue after pushing elements (front to back): ";
    queue<int> tempQueue = myQueue; // Temporary queue to display elements
    while (!tempQueue.empty()) {
        cout << tempQueue.front() << " ";
        tempQueue.pop();
    }
    cout << endl;

    // Accessing the front and back elements
    cout << "Front element: " << myQueue.front() << endl;
    cout << "Back element: " << myQueue.back() << endl;

    // Removing elements (dequeue using pop)
    myQueue.pop();
    cout << "Queue after popping the front element: ";
    tempQueue = myQueue; // Reset tempQueue to display remaining elements
    while (!tempQueue.empty()) {
        cout << tempQueue.front() << " ";
        tempQueue.pop();
    }
    cout << endl;

    // Checking if the queue is empty
    cout << "Is the queue empty? " << (myQueue.empty() ? "Yes" : "No") << endl;

    // Size of the queue
    cout << "Current size of the queue: " << myQueue.size() << endl;

    // Using a queue of strings
    queue<string> stringQueue;
    stringQueue.push("Alice");
    stringQueue.push("Bob");
    stringQueue.push("Charlie");

    cout << "Queue of strings (front to back): ";
    queue<string> tempStringQueue = stringQueue; // Temporary queue for display
    while (!tempStringQueue.empty()) {
        cout << tempStringQueue.front() << " ";
        tempStringQueue.pop();
    }
    cout << endl;

    // Nested queue example
    queue<queue<int>> nestedQueue;

    // Adding queues to the nested queue
    queue<int> subQueue1;
    subQueue1.push(1);
    subQueue1.push(2);
    subQueue1.push(3);

    queue<int> subQueue2;
    subQueue2.push(4);
    subQueue2.push(5);

    nestedQueue.push(subQueue1);
    nestedQueue.push(subQueue2);

    cout << "Nested Queue Elements:\n";
    while (!nestedQueue.empty()) {
        queue<int> subQueue = nestedQueue.front();
        nestedQueue.pop();
        cout << "Sub-queue (front to back): ";
        while (!subQueue.empty()) {
            cout << subQueue.front() << " ";
            subQueue.pop();
        }
        cout << endl;
    }

    return 0;
}
