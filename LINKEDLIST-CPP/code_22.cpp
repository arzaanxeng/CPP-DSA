// Find Length of a linked list 
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
    int length(ListNode* fast , ListNode* slow){
        /*Here We can calculate the length from the fact that if the pointers are going 
        to iterate in a cycle so we can move one of the pointer ahead one by one along with 
        a counter such that when pointer meets the another pointer again we stop to counter and get our length !!*/
        int count = 1;
        slow = slow->next;
        while(fast!=slow){
            slow = slow->next;
            count++;
        }
        return count;
    }
    int hasCycleLength(ListNode *head) {
        if(head == NULL) return 0;
        auto fast = head;
        auto slow = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(fast==slow) return length(fast,slow); // Meeting Point If A cycle exists 
        }
        return 0;
    }
};

