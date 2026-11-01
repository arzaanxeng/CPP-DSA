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

// Find minimum element in the LL
int CountX(Node* &head ){
    Node* ptr = head;
    int min = INT_MAX;
    while( ptr != NULL){
        if(ptr->data < min) min = ptr->data;
        ptr = ptr->next;
    }
    return min;
}

int main(void){
    Node* head = NULL;                          // empty list

    insertAtTail(head, 10);
    insertAtTail(head, -20);
    insertAtTail(head, 30);
    insertAtTail(head, 50);
    insertAtTail(head, -60);
    insertAtTail(head, 60);
    insertAtTail(head, 80);

    
    int ans = CountX(head);
    cout<<"The smallest element in the Linked List is : "<<ans;
    // Free the list (every new needs a delete)
    while(head != NULL){
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    return 0;
}