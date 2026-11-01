/*
 * ============================================================================
 *  INTRODUCTION TO LINKED LISTS (Singly Linked List)
 * ============================================================================
 *
 *  WHAT IS A LINKED LIST?
 *  ----------------------
 *  A linked list is a linear data structure made of NODES. Each node stores:
 *      1. data  -> the actual value
 *      2. next  -> a pointer to the next node in the list
 *
 *  Unlike an array, the nodes are NOT stored in contiguous memory. They can be
 *  scattered anywhere in the heap, and the "next" pointers chain them together.
 *
 *      head
 *       |
 *       v
 *     [10 | *]--->[20 | *]--->[30 | *]--->[40 | NULL]
 *
 *  - "head" is a pointer to the FIRST node. Lose the head, lose the list.
 *  - The last node's next is nullptr, which marks the end of the list.
 *
 *  ARRAY vs LINKED LIST
 *  --------------------
 *  Operation              | Array          | Linked List
 *  -----------------------|----------------|----------------------------
 *  Access by index        | O(1)           | O(n)  (must walk from head)
 *  Insert/delete at front | O(n) (shifting)| O(1)
 *  Insert/delete at end   | O(1) amortized | O(n) here (O(1) with a tail ptr)
 *  Size                   | fixed/resize   | grows/shrinks dynamically
 *  Memory                 | contiguous     | scattered + 8 bytes/node for ptr
 *
 *  WHAT THIS FILE COVERS
 *  ---------------------
 *   1. Defining a Node
 *   2. Creating nodes manually and linking them
 *   3. Traversal (printing the list)
 *   4. Insert at head, tail, and a given position
 *   5. Search
 *   6. Delete (by value, at head)
 *   7. Length
 *   8. Freeing memory (no leaks)
 *
 *  Compile & run:
 *      g++ -std=c++17 code_1.cpp -o code_1 && ./code_1
 * ============================================================================
 */

#include <iostream>
using namespace std;

// ----------------------------------------------------------------------------
// 1. NODE DEFINITION
// ----------------------------------------------------------------------------
// A struct is used because every member is public by default, which keeps the
// intro simple. Real-world code often wraps this in a LinkedList class.
struct Node {
    int data;     // value stored in this node
    Node* next;   // address of the next node (nullptr if this is the last one)

    // Constructor: lets us write `new Node(5)` instead of setting fields by hand.
    // next is initialised to nullptr so a fresh node never points at garbage.
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// ----------------------------------------------------------------------------
// 3. TRAVERSAL
// ----------------------------------------------------------------------------
// Walk from head to the end, printing each value.
// We take `head` BY VALUE (a copy of the pointer), so moving `head` here does
// NOT change the caller's head. That is why we can safely advance it.
// Time: O(n)   Space: O(1)
void printList(Node* head) {
    Node* curr = head;              // curr is our "walker"
    while (curr != nullptr) {       // stop when we fall off the end
        cout << curr->data << " -> ";
        curr = curr->next;          // hop to the next node
    }
    cout << "NULL" << endl;
}

// ----------------------------------------------------------------------------
// 7. LENGTH
// ----------------------------------------------------------------------------
// Same traversal, but count nodes instead of printing.
// Time: O(n)   Space: O(1)
int getLength(Node* head) {
    int count = 0;
    Node* curr = head;
    while (curr != nullptr) {
        count++;
        curr = curr->next;
    }
    return count;
}

// ----------------------------------------------------------------------------
// 4a. INSERT AT HEAD
// ----------------------------------------------------------------------------
// Steps:
//   1. Create the new node.
//   2. Point new node's next to the CURRENT head.
//   3. Make the new node the head.
// ORDER MATTERS: if you move head first, you lose the rest of the list.
//
// We pass `head` by REFERENCE (Node*&) because we need to change the caller's
// head pointer itself. With plain `Node*` we would only modify a local copy.
// Time: O(1)
void insertAtHead(Node*& head, int value) {
    Node* newNode = new Node(value);  // allocated on the heap, survives after return
    newNode->next = head;             // link new node to old first node
    head = newNode;                   // new node is now the first node
}

// ----------------------------------------------------------------------------
// 4b. INSERT AT TAIL
// ----------------------------------------------------------------------------
// Steps:
//   1. Create the new node.
//   2. If the list is empty, the new node becomes the head.
//   3. Otherwise walk to the LAST node (the one whose next is nullptr)
//      and attach the new node there.
// Time: O(n) because we must walk to the end. Keeping a `tail` pointer
// would make this O(1).
void insertAtTail(Node*& head, int value) {
    Node* newNode = new Node(value);

    if (head == nullptr) {            // empty list special case
        head = newNode;
        return;
    }

    Node* curr = head;
    while (curr->next != nullptr) {   // stop AT the last node, not after it
        curr = curr->next;
    }
    curr->next = newNode;             // attach at the end
}

// ----------------------------------------------------------------------------
// 4c. INSERT AT POSITION (0-indexed)
// ----------------------------------------------------------------------------
// position 0           -> same as insert at head
// position == length   -> same as insert at tail
// Anything greater than length is invalid.
//
// To insert at index p we need the node at index p-1 (call it `prev`):
//      prev -> newNode -> (what prev used to point to)
// Time: O(n)
void insertAtPosition(Node*& head, int value, int position) {
    if (position < 0) {
        cout << "Invalid position" << endl;
        return;
    }
    if (position == 0) {
        insertAtHead(head, value);
        return;
    }

    // Walk to the node just BEFORE the insertion point.
    Node* prev = head;
    for (int i = 0; i < position - 1 && prev != nullptr; i++) {
        prev = prev->next;
    }

    if (prev == nullptr) {            // position was beyond the end of the list
        cout << "Invalid position" << endl;
        return;
    }

    Node* newNode = new Node(value);
    newNode->next = prev->next;       // 1) new node grabs the rest of the list
    prev->next = newNode;             // 2) prev now points to the new node
    // Again: do step 1 BEFORE step 2, otherwise the rest of the list is lost.
}

// ----------------------------------------------------------------------------
// 5. SEARCH
// ----------------------------------------------------------------------------
// Linear search. Returns the 0-based index of the first match, or -1.
// Time: O(n). No binary search possible: we cannot jump to the middle.
int search(Node* head, int key) {
    int index = 0;
    Node* curr = head;
    while (curr != nullptr) {
        if (curr->data == key) return index;
        curr = curr->next;
        index++;
    }
    return -1;
}

// ----------------------------------------------------------------------------
// 6a. DELETE AT HEAD
// ----------------------------------------------------------------------------
// Steps:
//   1. Save the old head in a temp pointer.
//   2. Move head to the second node.
//   3. delete the old head (otherwise: memory leak).
// Time: O(1)
void deleteAtHead(Node*& head) {
    if (head == nullptr) {
        cout << "List is empty, nothing to delete" << endl;
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}

// ----------------------------------------------------------------------------
// 6b. DELETE BY VALUE (first occurrence)
// ----------------------------------------------------------------------------
// Cases:
//   - empty list            -> nothing to do
//   - value is in the head  -> delete at head
//   - value is elsewhere    -> find the node BEFORE it, then bypass it:
//                              prev -> target -> after   becomes   prev -> after
// Time: O(n)
void deleteByValue(Node*& head, int key) {
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }

    if (head->data == key) {
        deleteAtHead(head);
        return;
    }

    Node* prev = head;
    // Look one node ahead so we always keep a handle on the node BEFORE the target.
    while (prev->next != nullptr && prev->next->data != key) {
        prev = prev->next;
    }

    if (prev->next == nullptr) {
        cout << key << " not found" << endl;
        return;
    }

    Node* target = prev->next;        // node to remove
    prev->next = target->next;        // bypass it
    delete target;                    // free its memory
}

// ----------------------------------------------------------------------------
// 8. FREE THE WHOLE LIST
// ----------------------------------------------------------------------------
// Every `new` needs a matching `delete`. Grab `next` BEFORE deleting a node,
// because reading from a deleted node is undefined behaviour.
void freeList(Node*& head) {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    // head is now nullptr, so the list is safely empty.
}

// ----------------------------------------------------------------------------
// MAIN: walk through everything above
// ----------------------------------------------------------------------------
int main() {
    // ---- 2. Building a list by hand (to see what is really happening) ------
    // Create three separate nodes on the heap...
    Node* first  = new Node(10);
    Node* second = new Node(20);
    Node* third  = new Node(30);

    // ...and chain them: first -> second -> third -> NULL
    first->next  = second;
    second->next = third;
    // third->next is already nullptr from the constructor.

    Node* head = first;               // head always points to the first node

    cout << "Manually built list: ";
    printList(head);                  // 10 -> 20 -> 30 -> NULL

    // ---- Insertions ---------------------------------------------------------
    insertAtHead(head, 5);            // 5 -> 10 -> 20 -> 30
    cout << "After insertAtHead(5): ";
    printList(head);

    insertAtTail(head, 40);           // 5 -> 10 -> 20 -> 30 -> 40
    cout << "After insertAtTail(40): ";
    printList(head);

    insertAtPosition(head, 15, 2);    // 5 -> 10 -> 15 -> 20 -> 30 -> 40
    cout << "After insertAtPosition(15, 2): ";
    printList(head);

    cout << "Length: " << getLength(head) << endl;   // 6

    // ---- Search -------------------------------------------------------------
    cout << "Index of 30: " << search(head, 30) << endl;   // 4
    cout << "Index of 99: " << search(head, 99) << endl;   // -1

    // ---- Deletions ----------------------------------------------------------
    deleteAtHead(head);               // removes 5
    cout << "After deleteAtHead: ";
    printList(head);

    deleteByValue(head, 20);          // removes the 20 in the middle
    cout << "After deleteByValue(20): ";
    printList(head);

    deleteByValue(head, 99);          // prints "99 not found"

    // ---- Cleanup ------------------------------------------------------------
    freeList(head);
    cout << "After freeList: ";
    printList(head);                  // NULL

    return 0;
}

/*
 * ============================================================================
 *  KEY TAKEAWAYS
 * ============================================================================
 *  1. head is everything. Never lose it without freeing the list first.
 *  2. When inserting, link the NEW node to the rest first, then relink the
 *     previous node. Reverse order = broken list.
 *  3. When the head itself can change (insert/delete at front), pass head by
 *     reference (Node*&), or return the new head.
 *  4. Always handle the edge cases: empty list, single node, head, tail.
 *  5. Every `new` needs a `delete`.
 *
 *  PRACTICE NEXT
 *  -------------
 *   - Reverse a linked list (iterative, then recursive)
 *   - Find the middle node (slow/fast pointers)
 *   - Detect a cycle (Floyd's algorithm)
 *   - Merge two sorted linked lists
 *   - Remove the Nth node from the end
 *   - Then: doubly linked list and circular linked list
 * ============================================================================
 */