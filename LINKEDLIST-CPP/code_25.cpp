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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(101); // node->val E [-100,100]
        auto tail = dummy;
        auto ptr = head;
        while( ptr != NULL ){
            if(tail->val != ptr->val){
                tail->next = ptr;
                tail = ptr;
                ptr = ptr->next;
            }
            else{
                auto temp = ptr->next;
                delete ptr;
                ptr = temp;
            }
        }
        tail->next = NULL;
        auto new_head = dummy->next;
        delete dummy;
        return new_head;
    }
};