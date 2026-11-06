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

// Here we created two pointers with distance between them being equal to K and the pointer k steps behind will point towards the ans NODE when fast would become NULL
int getkthNode(Node* head, int k) {
    auto slow = head;
    auto fast = head;
    // Move fast K steps ahead to establish a fixed gap.
    for( int i = 1 ; i <= k ; i++){
        if(fast == NULL ) return -1;
        fast = fast->next;
    }
    // Move fast K steps ahead to establish a fixed gap.
    while(fast!=NULL){
        slow = slow->next;
        fast = fast->next;
    }
    return slow->value;
    /*
    - Time Complexity: O(N)
    - Space Complexity: O(1)
    No need to calculate the length, and only one traversal is required after establishing the initial gap.
    */ 
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
    int ans = getkthNode(head,k);
    cout<<"\nThe value of "<<k<<" node from the end is : "<<ans;
    return 0;
}