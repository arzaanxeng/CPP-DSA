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

// Minimum Value in a Linked List ( Length > 1 )
int SecondMinValue(Node* head){
    if( head == NULL || head->next == NULL ) return INT_MIN; // Empty List ( return the value as defined in the Question )
    auto temp = head;
    int min = INT_MAX;
    int sec_min = INT_MAX;
    while(temp!=NULL){
        if( min > temp->val ){
            sec_min = min; // Just trace the prev minimum element in the LL
            min = temp->val;
        }
        // Additional Condition 
        else if( min < temp->val && temp->val < sec_min ) sec_min = temp->val;
        temp = temp->next;
    }
    return sec_min;
}



int main(void){
    // Forming new Nodes in Heap
    Node* head = new Node(130);
    Node* second = new Node(290);
    Node* third = new Node(290);
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

    int sec_minimum = SecondMinValue(head);
    cout<<"The minimum value in the Linked List is : "<<sec_minimum;
    return 0;
}