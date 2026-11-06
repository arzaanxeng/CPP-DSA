
/*
A node in a singly linked list should have two attributes: val and next. val is the value of the current node, and next is a pointer/reference to the next node.
*/
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

class MyLinkedList {
private:
    ListNode* head;
    int size;

    ListNode* getKthIndex(int k) {
        if(k >= size) return NULL;
        auto temp = head;
        for(int i = 0; i < k; i++) temp = temp->next;
        return temp;
    }

public:
    MyLinkedList() {
        head = NULL;
        size = 0;
    }
    
    int get(int index) {
        auto ptr = getKthIndex(index);
        if(ptr == NULL) return -1;
        return ptr->val;
    }
    
    void addAtHead(int val) {
        ListNode* newNode = new ListNode(val);
        auto temp = head;
        newNode->next = temp;
        head = newNode;
        size++; // remember to add the size while adding a NEW NODE
    }
    
    void addAtTail(int val) {
        ListNode* newNode = new ListNode(val);
        if(head==NULL){
            head = newNode;
            size++;
            return;
        }
        auto temp = head;
        while( temp->next != NULL ) temp = temp->next;
        temp->next = newNode;
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index < 0 || index > size) return;
        if(index == 0){
            addAtHead(val);
            return;
        }
        // We have to take care of the first INDEX as we are tracing the prev index node as well
        auto prev = getKthIndex(index-1); // Got the previous Node
        ListNode* newNode = new ListNode(val);
        auto temp = prev->next;
        prev->next = newNode;
        newNode->next = temp;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if(index < 0 || index >= size) return;

        ListNode* temp;

        if(index == 0) {
            temp = head;
            head = head->next;
        }
        else {
            auto prev = getKthIndex(index-1);
            temp = prev->next;
            prev->next = temp->next;
        }

        delete temp;
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */