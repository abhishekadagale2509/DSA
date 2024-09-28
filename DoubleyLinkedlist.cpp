#include <iostream>
using namespace std;

// Node structure for doubly linked list
struct Node {
    int data;
    Node* prev;
    Node* next;
    
    // Constructor
    Node(int val) {
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};

// Doubly linked list class
class DoublyLinkedList {
private:
    Node* head;
    Node* tail;
    
public:
    // Constructor
    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }
    
    // Insert at the front of the list
    void insertFront(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }
    
    // Insert at the end of the list
    void insertEnd(int val) {
        Node* newNode = new Node(val);
        if (tail == nullptr) {
            head = tail = newNode;
        } else {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }
    
    // Delete a node with the given value
    void deleteNode(int val) {
        Node* current = head;
        while (current != nullptr && current->data != val) {
            current = current->next;
        }
        
        if (current == nullptr) {
            cout << "Node not found!\n";
            return;
        }
        
        // If the node is the head
        if (current == head) {
            head = current->next;
            if (head != nullptr) {
                head->prev = nullptr;
            }
        } else {
            current->prev->next = current->next;
        }
        
        // If the node is the tail
        if (current == tail) {
            tail = current->prev;
            if (tail != nullptr) {
                tail->next = nullptr;
            }
        } else {
            if (current->next != nullptr) {
                current->next->prev = current->prev;
            }
        }
        
        delete current;
    }
    
    // Display the list from the beginning
    void displayForward() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
    
    // Display the list from the end
    void displayBackward() {
        Node* current = tail;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->prev;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList dll;
    
    dll.insertEnd(10);
    dll.insertEnd(20);
    dll.insertEnd(30);
    dll.displayForward(); // Output: 10 20 30
    
    dll.insertFront(5);
    dll.displayForward(); // Output: 5 10 20 30
    dll.displayBackward(); // Output: 30 20 10 5
    
    dll.deleteNode(20);
    dll.displayForward(); // Output: 5 10 30
    
    return 0;
}
