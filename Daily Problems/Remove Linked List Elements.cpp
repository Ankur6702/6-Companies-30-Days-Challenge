// Remove Linked List Elements
// Link: https://leetcode.com/problems/remove-linked-list-elements
// Time Complexity: O(n)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL) return head;
        
        if(head->next == NULL) {
            if(head->val == val) return NULL;
            else return head;
        }
        
        ListNode* prev = head;
        ListNode* curr = head->next;
        
        while(curr) {
            if(curr->val == val) {
                prev->next = curr->next;
                delete curr;
            } else prev = prev->next; 
            curr = prev->next;
        }
        
        if(head->val == val) head = head->next;
        return head;
    }
};