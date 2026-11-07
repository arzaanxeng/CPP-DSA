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
    ListNode* partition(ListNode* head, int x) {
        // THESE ARE MY DUMMY NODES
        ListNode* dummy1 = new ListNode(-1);
        ListNode* dummy2 = new ListNode(-1);
        // Now I am creating pointers for each DUMMY NODE
        auto tail1 = dummy1 ;
        auto tail2 = dummy2 ;
        auto ptr = head;
        // Now I will form 2 different Linked Lists
        while( ptr != NULL ){
            if(ptr->val < x){
                tail1->next = ptr;
                tail1 = ptr;
            }
            else{
                tail2->next = ptr;
                tail2 = ptr;
            }
            ptr = ptr->next;
        }
        tail1->next = NULL;
        tail2->next = NULL;
        // Joining the links between the two newly formed LLs
        tail1->next = dummy2->next;
        // The newhead ptr will be the head of LL containing values < x 
        auto new_head = dummy1->next;
        delete dummy1;
        delete dummy2;
        return new_head;
    }
};