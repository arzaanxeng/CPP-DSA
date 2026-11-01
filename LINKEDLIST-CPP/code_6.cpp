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

// Find maximum element in the LL
int MaxElement(Node* &head ){
    Node* ptr = head;
    int max = INT_MIN;
    while( ptr != NULL){
        if(ptr->data > max) max = ptr->data;
        ptr = ptr->next;
    }
    return max;
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

    
    int ans = MaxElement(head);
    cout<<"The largest element in the Linked List is : "<<ans;
    // Free the list (every new needs a delete)
    while(head != NULL){
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    return 0;
}