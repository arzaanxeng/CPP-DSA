#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    // Constructor
    Node(int val){
        this->val = val;
        next = NULL;
    }
};

// Maximum Value in a Linked List
int MaxValue(Node* head){
    if( head == NULL ) return INT_MIN; // Empty List ( return the value as defined in the Question )
    auto temp = head;
    int max = INT_MIN;
    while(temp!=NULL){
        if( max < temp->val ) max = temp->val;
        temp = temp->next;
    }
    return max;
}



int main(void){
    // Forming new Nodes in Heap
    Node* head = new Node(130);
    Node* second = new Node(290);
    Node* third = new Node(409);
    Node* fourth = new Node(-180);
    Node* fifth = new Node(0);
    // Linking the Nodes Unilaterally
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    auto temp = head;
    while( temp != NULL ){
        cout<<temp->val<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;

    int maximum = MaxValue(head);
    cout<<"The minimum value in the Linked List is : "<<maximum;
    return 0;
}