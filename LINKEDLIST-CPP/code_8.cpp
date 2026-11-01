// Find kth Node value

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

// Find minimum element in the LL such that length of LL > 1
int KthNode(Node* head , int k) {
    if( head == NULL ) return -1;
    auto ptr = head;
    for( int i = 1 ; i <= k-1 ; i++){
        if(ptr == NULL) return -1;
        ptr = ptr->next;
    }
    return ptr->data;
}

int main(void){
    Node* head = NULL;                          // empty list

    insertAtTail(head, 10);
    insertAtTail(head, -20);
    insertAtTail(head, -50);
    insertAtTail(head, 50);
    insertAtTail(head, -60);
    insertAtTail(head, 60);
    insertAtTail(head, 80);

    int k = 4;
    int ans = KthNode(head,k);
    cout<<"The value of kth Node in the Linked List is : "<<ans;
    // Free the list (every new needs a delete)
    while(head != NULL){
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    return 0;
}