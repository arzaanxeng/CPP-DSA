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
    int hasCycleLength(ListNode *head) {
        if(head == NULL) return 0;
        unordered_map<ListNode*,int>seen;
        auto temp = head;
        int time = 1;
        while(temp != NULL){
            if(seen.find(temp) != seen.end()){
                int value = seen[temp];
                return time - value;
            }
            seen[temp] = time;
            time++;
            temp=temp->next;
        }
        return 0;
    }
};


