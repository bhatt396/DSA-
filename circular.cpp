#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    
    Node(int val) : data(val), next(nullptr) {}
};

class CircularLinkedList {
public:
    Node* tail;

    CircularLinkedList() : tail(nullptr) {}

    // Insert at the end
    void insertAtEnd(int data) {
        Node* newNode = new Node(data);

        if (tail == nullptr) {
            tail = newNode;
            tail->next = tail; // Points to itself
        } else {
            newNode->next = tail->next;
            tail->next = newNode;
            tail = newNode; // Update tail
        }
    }

    // Insert at the beginning
    void insertAtBeginning(int data) {
        Node* newNode = new Node(data);

        if (tail == nullptr) {
            tail = newNode;
            tail->next = tail; // Points to itself
        } else {
            newNode->next = tail->next;
            tail->next = newNode; // New node becomes first
        }
    }

    // Delete from beginning
    void deleteFromBeginning() {
        if (tail == nullptr) {
            cout << "List is empty!\n";
            return;
        }

        Node* head = tail->next;

        if (tail == head) { // Only one node
            delete head;
            tail = nullptr;
        } else {
            tail->next = head->next;
            delete head;
        }
    }

    // Print list
    void printList() {
        if (tail == nullptr) {
            cout << "List is empty!\n";
            return;
        }

        Node* temp = tail->next;
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != tail->next);
        
        cout << "(Back to head)\n";
    }
};

// Driver Code
int main() {
    CircularLinkedList cll;

    cll.insertAtEnd(10);
    cll.insertAtEnd(20);
    cll.insertAtEnd(30);
    cll.insertAtBeginning(5);
    
    cout << "Circular Linked List:\n";
    cll.printList(); // Output: 5 -> 10 -> 20 -> 30 -> (Back to head)

    cll.deleteFromBeginning();
    cout << "After Deletion:\n";
    cll.printList(); // Output: 10 -> 20 -> 30 -> (Back to head)

    return 0;
}

#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
struct Node {
    int data;
    Node* next;
};

Node* sentinel = new Node();  // Sentinel node at the head
sentinel->next = nullptr;

// Insertion at the head (after the sentinel node)
void insertAtHead(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = sentinel->next;
    sentinel->next = newNode;
}

// Deletion at the head (after the sentinel node)
void deleteAtHead() {
    if (sentinel->next != nullptr) {  // List is not empty
        Node* temp = sentinel->next;
        sentinel->next = temp->next;
        delete temp;
    }
}
