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

int LengthList( Node* head ){
    int count = 0;
    auto temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}


int main(void){
    // Forming new Nodes in Heap
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(40);
    Node* fourth = new Node(-10);
    // Linking the Nodes Unilaterally
    head->next = second;
    second->next = third;
    third->next = fourth;
    auto temp = head;
    while( temp != NULL ){
        cout<<temp->val<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;

    int ans = LengthList(head);
    cout<<"The length of the Linked List is : "<<ans;
    return 0;
}