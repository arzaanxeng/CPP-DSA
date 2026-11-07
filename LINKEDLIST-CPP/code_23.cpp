/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include<iostream>
using namespace std;

class ListNode{
    public:
    int val;
    ListNode* next;

    ListNode(int val){
        this->val = val;
        next = NULL;
    }
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        bool IsCycle=false;
        // Checking wether there is a cycle or not 
        while(fast != NULL && fast->next != NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow == fast){
                IsCycle=true;
                break;
            }
        }

        if(!IsCycle) return NULL;
        slow=head;

        // Make them meet at the common point after making them move 1 step 
        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};
/*
Let's define:
- L: Distance from head to cycle starting node.
- C: Distance from cycle starting node to meeting point.
- K: Length of the cycle.
When the two pointers meet:
- Slow has travelled -> L+C
- Fast has travelled -> 2(L+C)

Since fast travels twice as far:
2(L+C)-(L+C)=L+C

The extra distance travelled by fast must be a multiple of the cycle length:
L+C=mK

Rearranging:
L=mK-C

This means that if we move one pointer back to the head and keep the other at the meeting point, both pointers will reach the cycle's starting node after exactly L steps.

*/