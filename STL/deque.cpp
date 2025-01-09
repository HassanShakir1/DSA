#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq;

    // Adding elements to the back and front
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(5);
    dq.push_front(1);

    std::cout << "Deque after push operations: ";
    for (int val : dq) {
        std::cout << val << " ";
    }
    std::cout << "\n";

    // Accessing elements
    std::cout << "Front element: " << dq.front() << "\n";
    std::cout << "Back element: " << dq.back() << "\n";

    // Removing elements from the back and front
    dq.pop_back();
    dq.pop_front();

    std::cout << "Deque after pop operations: ";
    for (int val : dq) {
        std::cout << val << " ";
    }
    std::cout << "\n";

    // Access by index
    std::cout << "Element at index 0: " << dq[0] << "\n";

    // Check size and clear the deque
    std::cout << "Size of deque: " << dq.size() << "\n";
    dq.clear();
    std::cout << "Is deque empty? " << (dq.empty() ? "Yes" : "No") << "\n";

     std::deque<std::deque<int>> nestedDeque;

    // Adding rows to the nested deque
    nestedDeque.push_back({1, 2, 3});
    nestedDeque.push_back({4, 5, 6});
    nestedDeque.push_back({7, 8, 9});

    // Printing the elements
    nestedDeque.pop_front();
    std::cout << "Nested Deque Elements:\n";
    for (const auto& row : nestedDeque) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << "\n";
    }


    return 0;
}
