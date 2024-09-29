#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to delete the starting (head) node
void deleteHead(Node*& head) {
    if (head == nullptr) {
        cout << "The list is already empty." << endl;
        return;
    }

    Node* temp = head;  // Store the current head
    head = head->next;  // Move head to the next node
    delete temp;        // Free memory of the old head
}

// Function to push a new node to the linked list
void push(Node*& head, int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}

// Function to print the linked list
void printList(Node* node) {
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    // Creating a linked list: 1->2->3->4->5
    push(head, 5);
    push(head, 4);
    push(head, 3);
    push(head, 2);
    push(head, 1);

    cout << "Linked list before deletion: ";
    printList(head);

    // Deleting the head node
    deleteHead(head);

    cout << "Linked list after deleting head: ";
    printList(head);

    return 0;
}
