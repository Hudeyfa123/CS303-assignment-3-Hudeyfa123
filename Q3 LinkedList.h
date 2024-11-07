#include <iostream>

// Node structure for linked list
struct Node {
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

// LinkedList class to manage the list
class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    // Adds a new node with the given value to the end of the list
    void append(int value) {
        if (!head) {
            head = new Node(value);
        } else {
            Node* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = new Node(value);
        }
    }

    // Displays all elements in the list
    void display() const {
        Node* current = head;
        while (current) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    // Getter for the head of the list
    Node* getHead() const {
        return head;
    }

    // Setter for the head of the list (used in sorting)
    void setHead(Node* newHead) {
        head = newHead;
    }
};

// Function declaration for insertion sort on linked list
void insertion_sort(LinkedList& list);
