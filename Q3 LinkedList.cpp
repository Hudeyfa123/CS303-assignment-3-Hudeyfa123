#include "LinkedList.h"

// Insertion sort for linked list
void insertion_sort(LinkedList& list) {
    if (!list.getHead() || !list.getHead()->next) return;

    Node* sorted = nullptr;  // Start with an empty sorted list

    // Process each node in the original list
    Node* current = list.getHead();
    while (current) {
        Node* next = current->next; // Store the next node

        // Insert current node into sorted list
        if (!sorted || sorted->data >= current->data) {
            current->next = sorted;
            sorted = current;
        } else {
            Node* temp = sorted;
            while (temp->next && temp->next->data < current->data) {
                temp = temp->next;
            }
            current->next = temp->next;
            temp->next = current;
        }
        current = next; // Move to the next node
    }

    // Set the head of the list to the sorted list
    list.setHead(sorted);
}
