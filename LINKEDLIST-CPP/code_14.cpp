
#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;

    Node(int val) {
        value = val;
        next = NULL;
    }
};

// Function to insert a Node at the HEAD
void insertAtHead(Node*& head, int val) {
    Node* temp = new Node(val);
    temp->next = head; //It points to the first Node of the existing Linked List 
    head = temp; // Now the head will point to the new Node inerted in the Linked List 
}

void deleteFirstNode(Node*& head){
    if( head == NULL ) return ;
    auto temp = head;
    head = head->next;
    delete temp;
}

// Function to print Linked List
void printList(Node* head) {

    while(head != NULL) {
        cout << head->value << " -> ";
        head = head->next;
    }

    cout << "NULL" << endl;
}

int main() {

    // Creating Linked List
    Node* head = new Node(20);
    head->next = new Node(30);
    head->next->next = new Node(40);

    cout << "Original Linked List: ";
    printList(head);

    // Inserting at Head
    insertAtHead(head, 100);

    cout << "After Insertion: ";
    printList(head);

    // Delete the Node
    deleteFirstNode(head);
    cout<<"After Deletion : ";
    printList(head);

    return 0;
}
