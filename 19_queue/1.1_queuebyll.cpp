#include <iostream>
#include <list>

class Queue {
    std::list<int> ll;
    
public:
    // 1. Added an empty() function so main() can safely check the queue
    bool empty() {
        return ll.empty();
    }

    int front() {
        // Safe check just in case someone calls front() on an empty queue
        if (ll.empty()) {
            std::cout << "Queue is empty!\n";
            return -1; // Standard error return
        }
        return ll.front();
    }
    
    void push(int val) {
        ll.push_back(val);
    }
    
    void pop() {
        // 2. Used .empty() instead of checking for NULL
        if (ll.empty()) {
            std::cout << "Queue is empty\n";
        } else {
            ll.pop_front();
        }
    }
};

int main() {
    Queue q;
    q.push(34);
    q.push(66);
    
    // 3. The standard, safe way to empty a queue using a while loop
    while (!q.empty()) {
        std::cout << q.front() << " ";
        q.pop();
    }
    // Output: 34 66
    
    return 0;
}