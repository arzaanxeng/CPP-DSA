// Find Kth Node from end 

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

int getkthNode(Node* head, int k) {
    if (head == NULL || k < 0) return -1;
    
    int current_pos = 1;
    while (head != NULL) {
        if (current_pos == k) return head->value; 

        head = head->next;
        current_pos++;
    }
    return -1; // Return -1 if k is out of bounds
}
int Length(Node* head){
    int count = 0;
    while( head != NULL ){
        count++;
        cout<<head->value<<" -> ";
        head = head->next;
    }
    cout<<"NULL";
    return count ;   
}

int main(void){
    // Forming new Nodes in HEAP Memory 
    Node* head = new Node(10);
    Node* second = new Node(-20);
    Node* third = new Node(30);
    Node* fourth = new Node(-40);
    Node* fifth = new Node(70);

    // Linking the heads of the linked lists
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    // Creating a temp variable such that the head remains at place 
    Node* temp = head;
    int k = 2;

    int count = Length(head);
    int ans = getkthNode(head,count-k+1);
    cout<<"\nThe value of "<<k<<" node from the end is : "<<ans;
    return 0;
}