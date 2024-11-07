#include "Queue.h"
#include <iostream>

int main() {
    Queue<int> q;

    // a) Push 10 values
    for (int i = 1; i <= 10; ++i) {
        q.push(i);
    }

    // b) Display elements
    std::cout << "Queue elements: ";
    q.display();

    // c) Move front element to rear
    q.move_to_rear();
    std::cout << "After moving front to rear: ";
    q.display();

    return 0;
}
