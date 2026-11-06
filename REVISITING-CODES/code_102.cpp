// Length of the Linked List 
#include<iostream>
using namespace std;

class Node{
    public:
    int value;
    Node* next;

    Node(int val){
        value = val;
        next = NULL; // Default value
    }
};

int main(void){
    // Forming new Nodes in HEAP Memory 
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(70);

    // Linking the heads of the linked lists
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    // Creating a temp variable such that the head remains at place 
    Node* temp = head;
    int count = 0;
    while( temp != NULL ){
        count++;
        cout<<temp->value<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL";
    cout<<"\nThe number of nodes are : "<<count;
    return 0;
}