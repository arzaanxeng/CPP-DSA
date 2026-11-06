#include<iostream>
using namespace std;
/*
A node in a singly linked list has two attributes:
1. val  : Stores the value of the current node.
2. next : Stores the address of the next node.

MyLinkedList maintains two pointers:
1. head : Points to the first node.
2. tail : Points to the last node.

We also maintain size to keep track of the total number of nodes.
*/
class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int val) {
        this->val = val;
        next = NULL;
    }
};

class MyLinkedList {

private:
    ListNode* head;
    ListNode* tail;
    int size;

    /*
    FUNCTION: getKthIndex(k)

    PURPOSE:
    Returns the address of the node present at index k.

    LOGIC:
    1. Check whether the requested index is valid.
    2. Start traversal from head.
    3. Move k times using temp->next.
    4. Return the address of the node.

    NOTE:
    The first node is at index 0, so no movement
    is required when k = 0.

    TIME COMPLEXITY: O(n)
    SPACE COMPLEXITY: O(1)
    */

    ListNode* getKthIndex(int k) {

        if(k < 0 || k >= size) return NULL;

        auto temp = head;

        for(int i = 0; i < k; i++) {
            temp = temp->next;
        }

        return temp;
    }


public:

    /*
    FUNCTION: Constructor

    PURPOSE:
    Initializes an empty linked list.

    LOGIC:
    1. head = NULL means no first node exists.
    2. tail = NULL means no last node exists.
    3. size = 0 means the list contains no nodes.

    TIME COMPLEXITY: O(1)
    */

    MyLinkedList() {
        head = NULL;
        tail = NULL;
        size = 0;
    }


    /*
    FUNCTION: get(index)

    PURPOSE:
    Returns the value stored at the requested index.

    LOGIC:
    1. Call getKthIndex() to obtain the node address.
    2. If the returned pointer is NULL, the index is invalid.
    3. Otherwise, return the value stored in that node.

    TIME COMPLEXITY: O(n)
    SPACE COMPLEXITY: O(1)
    */

    int get(int index) {

        auto ptr = getKthIndex(index);

        if(ptr == NULL) return -1;

        return ptr->val;
    }


    /*
    FUNCTION: addAtHead(val)

    PURPOSE:
    Inserts a new node at the beginning of the linked list.

    LOGIC:
    1. Create a new node containing val.
    2. Store the current head in temp.
    3. Make the new node point to the previous head.
    4. Update head to point to the new node.
    5. Increment size.
    6. If this is the first node, update tail as well.

    WHY DO WE UPDATE TAIL?
    When the list is empty, the newly inserted node
    becomes both the first and the last node.

    TIME COMPLEXITY: O(1)
    SPACE COMPLEXITY: O(1) auxiliary space
    */

    void addAtHead(int val) {

        ListNode* newNode = new ListNode(val);

        auto temp = head;

        newNode->next = temp;

        head = newNode;

        size++;

        if(size == 1) {
            tail = head;
        }
    }


    /*
    FUNCTION: addAtTail(val)

    PURPOSE:
    Inserts a new node at the end of the linked list.

    LOGIC:
    1. If the list is empty, call addAtHead().
       This initializes both head and tail.
    2. Otherwise, create a new node.
    3. Connect the current tail to the new node.
    4. Move tail to the newly inserted node.
    5. Increment size.

    WHY IS THIS O(1)?
    We already maintain a tail pointer.
    Therefore, we do not need to traverse the entire list
    to find its last node.

    TIME COMPLEXITY: O(1)
    SPACE COMPLEXITY: O(1) auxiliary space
    */

    void addAtTail(int val) {

        if(size == 0) {

            addAtHead(val);

            return;
        }

        else {

            auto newNode = new ListNode(val);

            tail->next = newNode;

            tail = newNode;

            size++;
        }
    }


    /*
    FUNCTION: addAtIndex(index, val)

    PURPOSE:
    Inserts a new node at the specified index.

    LOGIC:
    1. Reject invalid indices.
    2. If index = 0, insert at the head.
    3. If index = size, insert at the tail.
    4. Otherwise, find the node at index - 1.
    5. Store the next node of prev in temp.
    6. Make prev point to the new node.
    7. Make the new node point to temp.
    8. Increment size.

    WHY DO WE FIND index - 1?
    Because we need the previous node to modify its next pointer.

    Example:

    Before:
    10 -> 20 -> 30

    addAtIndex(1, 15)

    After:
    10 -> 15 -> 20 -> 30

    POINTER MANIPULATION:
    prev->next = newNode;
    newNode->next = temp;

    These two statements establish the new connections.

    TIME COMPLEXITY: O(n)
    SPACE COMPLEXITY: O(1) auxiliary space
    */

    void addAtIndex(int index, int val) {

        if(index < 0 || index > size) return;

        /*
        Special case 1:
        Insertion at the beginning.
        */

        if(index == 0) {

            addAtHead(val);

            return;
        }

        /*
        Special case 2:
        Insertion at the end.
        We use addAtTail() so that tail is updated.
        */

        if(index == size) {

            addAtTail(val);

            return;
        }

        /*
        General case:
        Find the previous node.
        */

        auto prev = getKthIndex(index - 1);

        ListNode* newNode = new ListNode(val);

        /*
        Store the node that currently comes after prev.
        */

        auto temp = prev->next;

        /*
        Connect prev to the newly created node.
        */

        prev->next = newNode;

        /*
        Connect the new node to the remaining list.
        */

        newNode->next = temp;

        size++;
    }


    /*
    FUNCTION: deleteAtIndex(index)

    PURPOSE:
    Deletes the node present at the specified index.

    LOGIC:
    1. Reject invalid indices.
    2. Declare temp to store the node being deleted.
    3. If index = 0:
       a. Store head in temp.
       b. Move head to the next node.
       c. If only one node existed, set tail to NULL.
    4. Otherwise:
       a. Find the previous node.
       b. Store the node to be deleted in temp.
       c. Connect prev directly to the node after temp.
       d. If the deleted node was the last node,
          update tail to prev.
    5. Delete temp to free its memory.
    6. Decrement size.

    WHY DO WE UPDATE TAIL?
    If the last node is deleted, tail must point
    to the new last node.

    WHY DO WE USE delete temp?
    Removing a node from the linked list only disconnects it.
    delete releases the dynamically allocated memory.

    TIME COMPLEXITY: O(n)
    SPACE COMPLEXITY: O(1)
    */

    void deleteAtIndex(int index) {

        if(index < 0 || index >= size) return;

        ListNode* temp;

        /*
        Special case 1:
        Deleting the first node.
        */

        if(index == 0) {

            temp = head;

            head = head->next;

            /*
            If there was only one node,
            the list becomes empty.
            Therefore, tail must also become NULL.
            */

            if(size == 1) {

                tail = NULL;
            }
        }

        /*
        General case:
        Deleting a node other than the first node.
        */

        else {

            /*
            Find the previous node.
            */

            auto prev = getKthIndex(index - 1);

            /*
            Store the node that needs to be deleted.
            */

            temp = prev->next;

            /*
            Skip the node being deleted and connect
            the previous node to the next node.
            */

            prev->next = temp->next;

            /*
            If the deleted node was the last node,
            update tail to the previous node.
            */

            if(index == size - 1) {

                tail = prev;
            }
        }

        /*
        Release the memory occupied by the deleted node.
        */

        delete temp;

        /*
        Update the total number of nodes.
        */

        size--;
    }
};
