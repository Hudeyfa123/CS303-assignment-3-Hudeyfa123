#include "LinkedList.h"
#include <iostream>

int main() {
    LinkedList list;

    // Add elements to the linked list
    list.append(4);
    list.append(2);
    list.append(5);
    list.append(3);
    list.append(1);

    std::cout << "Original list: ";
    list.display();

    // Sort the list using insertion sort
    insertion_sort(list);

    std::cout << "Sorted list: ";
    list.display();

    return 0;
}
