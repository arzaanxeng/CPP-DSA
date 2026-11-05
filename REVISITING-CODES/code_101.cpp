// Linked List 
#include<iostream>
using namespace std;

class Node{
    public:
    int value;
    Node* next;

    Node(int val){
        value = val;
        next = NULL;
    }
};

int main(void){
    // Forming new Nodes in HEAP Memory 
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);

    // Linking the heads of the linked lists
    head->next = second;
    second->next = third;
    third->next = fourth;
    // Creating a temp variable such that the head remains at place 
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->value<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL";
    return 0;
}