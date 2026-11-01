// Creating a Linked List

#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

int main(void){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(40);

    head->next = second;    // Store the address of Node B inside the next pointer of Node A.
    second->next = third;   // Store the address of Node C inside the next pointer of Node B.

    Node* temp = head; // Preserves the Actual HEAD pointer

    while( temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout<<"NULL";
    return 0;
}