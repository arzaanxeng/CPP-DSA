#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        next = NULL;
    }
};

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
    cout<<"NULL";
    return 0;
}