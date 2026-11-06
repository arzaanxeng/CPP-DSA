// Get common Node

#include <iostream>
using namespace std;

// Node structure
class Node {
public:
    int value;
    Node* next;

    Node(int val) {
        value = val;
        next = NULL;
    }
};

// Function to find the intersection of two Linked Lists
// Return the actual intersection Node, not just its value.
Node* getIntersectionNode(Node* headA, Node* headB) {
    auto ptr1 = headA;
    auto ptr2 = headB;
    while( ptr1 != ptr2 ){
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
        if(ptr1 == NULL) ptr1 = headB;
        if(ptr2 == NULL) ptr2 = headA;
    }
    return ptr1;
}

// Utility function to print a Linked List
void printList(Node* head) {
    while (head != NULL) {
        cout << head->value << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {

    // Creating first Linked List
    Node* headA = new Node(4);
    headA->next = new Node(1);

    // Creating second Linked List
    Node* headB = new Node(5);
    headB->next = new Node(6);
    headB->next->next = new Node(1);

    // Creating common part (shared Nodes)
    Node* common = new Node(8);
    common->next = new Node(9);
    common->next->next = new Node(10);

    // Connecting both lists to the common part
    headA->next->next = common;
    headB->next->next->next = common;

    // Find intersection
    Node* intersection = getIntersectionNode(headA, headB);

    if (intersection != NULL) {
        cout << "Intersection Node: " << intersection->value << endl;
    }
    else {
        cout << "No Intersection Found!" << endl;
    }

    return 0;
}
