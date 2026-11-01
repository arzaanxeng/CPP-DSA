// Finding Length of a Linked List

#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    // Constructor
    Node(int val){
        data = val;
        next = NULL;
    }
};


int lengthIterative(Node* head){
    int count = 0;
    Node* curr = head;          // copy of head, so the caller's head is untouched
    while(curr != NULL){        
        count++;
        curr = curr->next;
    }
    return count;
}

// Recursive: length(list) = 1 + length(list without first node).

int lengthRecursive(Node* head){
    if(head == NULL) return 0;
    return 1 + lengthRecursive(head->next);
}

// Insert at the end (needed to build a list for testing)
void insertAtTail(Node*& head, int val){
    Node* newNode = new Node(val);
    if(head == NULL){           // empty list: new node becomes the head
        head = newNode;
        return;
    }
    Node* curr = head;
    while(curr->next != NULL){  // stop AT the last node
        curr = curr->next;
    }
    curr->next = newNode;
}

void printList(Node* head){
    Node* curr = head;
    while(curr != NULL){
        cout << curr->data << " -> ";
        curr = curr->next;
    }
    cout << "NULL" << endl;
}

int main(void){
    Node* head = NULL;                          // empty list

    cout << "Empty list length: " << lengthIterative(head) << endl;   // 0

    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 50);
    insertAtTail(head, 60);
    insertAtTail(head, 80);

    printList(head);                            // 10 -> 20 -> 30 -> 40 -> NULL

    cout << "Length : " << lengthIterative(head) << endl;  // 4
    //cout << "Length (recursive): " << lengthRecursive(head) << endl;  // 4

    // Free the list (every new needs a delete)
    while(head != NULL){
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}