// Remove Duplicates from Sorted List
// Link: https://leetcode.com/problems/remove-duplicates-from-sorted-list
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
    ListNode* deleteDuplicates(ListNode* head) {
        // Base cases for 0 and 1 length
        if(head == NULL || head->next == NULL) {
            return head;
        }
        
        ListNode* prev = head;
        ListNode*curr = head->next;
        
        while(curr) {
            if(prev->val == curr->val) {
                prev->next = curr->next;
                delete(curr);
            } else {
                prev = prev->next;
                // curr = curr->next;
            }
            curr = prev->next;
        }
        return head;
    }
};