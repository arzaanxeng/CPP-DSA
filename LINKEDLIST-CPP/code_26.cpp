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
    ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* current = head;

        while(current != NULL) {
            auto next = current->next;  
            current->next = prev;       
            prev = current;             
            current = next;             
        }
        return prev;
    }
    
    ListNode* getMid(ListNode* head){
        auto slow = head;
        auto fast = head->next;
        while( fast != NULL && fast->next != NULL ){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }

    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL) return true;
        auto mid = getMid(head);
        auto h1 = head;
        auto h2 = mid->next;
        mid->next = NULL;
        h2 = reverse(h2);
        while( h2 != NULL ){
            if( h1->val != h2->val )return false;
            h1 = h1->next;
            h2 = h2->next;
        }
        return true;
    }
};