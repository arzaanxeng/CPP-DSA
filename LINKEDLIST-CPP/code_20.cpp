// Loop In A Linked List
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
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL) return false;
        // We will use the concept Hare and Tortoise 
        // The reason is in a cycle the distance between both the pointers would decrease by 1 for every epoch and eventually the distance between them would become zero , henceforth they would meet at a point 
        auto fast = head;
        auto slow = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(fast==slow) return true; // Meeting Point If A cycle exists 
        }
        return false;
    }
};