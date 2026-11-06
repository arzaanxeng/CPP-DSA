
#include <iostream>
using namespace std;

// The deletion does not occur at LAST NODE
class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

// Function to delete a given Node (without head pointer)
void deleteNode(ListNode* node) {

    // IMPORTANT:
    // We cannot directly delete this Node because we don't have
    // access to the previous Node.

    // Example:
    // 2 -> 3 -> 4 -> 5 -> 6
    //         ^
    //       node

    // Step 1: Copy the next Node's value into the current Node
    node->val = node->next->val;

    // Step 2: Store the address of the next Node
    ListNode* temp = node->next;

    // Step 3: Connect the current Node to the Node after next
    node->next = temp->next; // Connecting the Copied Node to the next to next Node

    // Step 4: Delete the next Node
    delete temp;
}

// Function to print Linked List
void printList(ListNode* head) {

    while(head != NULL) {
        cout << head->val << " -> ";
        head = head->next;
    }

    cout << "NULL" << endl;
}

int main() {

    // Creating Linked List
    ListNode* head = new ListNode(2);
    head->next = new ListNode(3);
    head->next->next = new ListNode(4);
    head->next->next->next = new ListNode(5);
    head->next->next->next->next = new ListNode(6);

    cout << "Original Linked List: ";
    printList(head);

    // Delete the Node containing 4
    ListNode* node = head->next->next;
    deleteNode(node);

    cout << "After Deletion: ";
    printList(head);

    return 0;
}
