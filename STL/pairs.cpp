#include <iostream>
#include <utility>    // For  pair
#include <string>     // For  string
using namespace std;

// Function to return a pair
 pair<int,  string> createPair() {
    return {42, "Answer to the Ultimate Question"};
}

// Function to demonstrate nested pairs
 pair<int,  pair< string, double>> createNestedPair() {
    return {1, {"Nested", 3.14}};
}

int main() {
    // 1. Simple Pair Initialization
    pair<int,pair<int,pair<int,string>>>hassan(1,{2,{3,"Hasssan"}});
     cout << "1. Simple Pair Initialization\n";
     pair<int,  string> p1(1, "Hello");
     cout << "First: " << p1.first << ", Second: " << p1.second << "\n\n";

    // 2. Pair Initialization with ` make_pair`
     cout << "2. Pair Initialization with ` make_pair`\n";
    auto p2 =  make_pair(2, "World");
     cout << "First: " << p2.first << ", Second: " << p2.second << "\n\n";

    // 3. Returning a Pair from a Function
     cout << "3. Returning a Pair from a Function\n";
    auto returnedPair = createPair();
     cout << "Returned Pair - First: " << returnedPair.first << ", Second: " << returnedPair.second << "\n\n";

    // 4. Comparing Pairs
     cout << "4. Comparing Pairs\n";
     pair<int, int> pair1(3, 4);
     pair<int, int> pair2(3, 5);
    if (pair1 < pair2) {
         cout << "pair1 is less than pair2\n";
    } else {
         cout << "pair1 is not less than pair2\n";
    }
     cout << "\n";

    // 5. Swapping Pairs
     cout << "5. Swapping Pairs\n";
     pair< string, int> pairA("Alice", 25);
     pair< string, int> pairB("Bob", 30);
     cout << "Before Swap: PairA (" << pairA.first << ", " << pairA.second << "), "
              << "PairB (" << pairB.first << ", " << pairB.second << ")\n";
    pairA.swap(pairB);
     cout << "After Swap: PairA (" << pairA.first << ", " << pairA.second << "), "
              << "PairB (" << pairB.first << ", " << pairB.second << ")\n\n";

    // 6. Nested Pair
     cout << "6. Nested Pair\n";
    auto nestedPair = createNestedPair();
     cout << "Outer First: " << nestedPair.first
              << ", Inner First: " << nestedPair.second.first
              << ", Inner Second: " << nestedPair.second.second << "\n\n";

    // 7. Pair with Structured Bindings (C++17)
     cout << "7. Pair with Structured Bindings (C++17)\n";
     pair<int,  string> structuredPair = {123, "Structured"};

    return 0;
}
