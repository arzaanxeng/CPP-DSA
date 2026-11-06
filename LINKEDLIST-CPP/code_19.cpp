#include<iostream>
using namespace std;
class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int val) {
        this->val = val;
        next = NULL;
    }
};

class Solution {
public:

    /*
    FUNCTION: reverseList()

    PURPOSE:
    Reverses an entire singly linked list iteratively.

    LOGIC:
    1. prev initially points to NULL.
    2. current traverses the linked list.
    3. Store current->next in next before modifying the link.
    4. Reverse the current node's connection.
    5. Move prev and current one step forward.
    6. Return prev, which becomes the new head.

    TIME COMPLEXITY: O(n)
    SPACE COMPLEXITY: O(1)
    */

    ListNode* reverseList(ListNode* head) {

        ListNode* prev = NULL;
        auto current = head;

        while(current != NULL) {

            /* Store the next node before reversing the connection. */
            auto next = current->next;

            /* Reverse the current node's pointer. */
            current->next = prev;

            /* Move prev to the current node. */
            prev = current;

            /* Move current to the previously stored next node. */
            current = next;
        }

        /* Prev now points to the new head of the reversed list. */
        return prev;
    }


    /*
    FUNCTION: reverseBetween()

    PURPOSE:
    Reverses the linked list between positions left and right.

    LOGIC:
    1. Identify the four important pointers.
    2. Break the connections around the selected sublist.
    3. Reverse the selected sublist.
    4. Reconnect the reversed sublist with the remaining nodes.

    TIME COMPLEXITY: O(n)
    SPACE COMPLEXITY: O(1)
    */

    ListNode* reverseBetween(ListNode* head, int left, int right) {

        /* Store the nodes surrounding the sublist to be reversed. */

        ListNode* leftNode = NULL;
        ListNode* prevleft = NULL;
        ListNode* rightNode = NULL;
        ListNode* rightnext = NULL;

        int idx = 1;

        auto current = head;

        /* If both positions are identical, no reversal is required. */

        if(left == right) return head;


        /*
        STEP 1: IDENTIFY THE REQUIRED NODES

        Traverse the linked list and locate:

        prevleft  -> Node at position left - 1.
        leftNode  -> Node at position left.
        rightNode -> Node at position right.
        rightnext -> Node at position right + 1.
        */

        while(current != NULL) {

            if(idx == left - 1) {
                prevleft = current;
            }

            if(idx == left) {
                leftNode = current;
            }

            if(idx == right) {
                rightNode = current;
            }

            if(idx == right + 1) {
                rightnext = current;
            }

            current = current->next;

            idx++;
        }


        /*
        STEP 2: BREAK THE CONNECTIONS

        Disconnect the sublist from the remaining linked list.

        If prevleft is NULL, it means left = 1.
        Therefore, there is no node before the sublist.

        Disconnect rightNode from rightnext.
        */

        if(prevleft != NULL) {
            prevleft->next = NULL;
        }

        rightNode->next = NULL;


        /*
        STEP 3: REVERSE THE SELECTED SUBLIST

        Reverse the linked list starting from leftNode.

        The returned pointer represents the new head
        of the reversed sublist.
        */

        ListNode* reversedHead = reverseList(leftNode);


        /*
        STEP 4: RECONNECT THE LINKED LIST

        Case 1:
        If prevleft is NULL, the reversed sublist
        becomes the new beginning of the entire list.

        Case 2:
        Otherwise, connect prevleft to reversedHead.

        Finally, connect the original leftNode
        (which is now the last node of the reversed sublist)
        to rightnext.
        */

        if(prevleft == NULL) {
            head = reversedHead;
        }
        else {
            prevleft->next = reversedHead;
        }

        leftNode->next = rightnext;


        /* Return the updated head of the linked list. */

        return head;
    }
};