// Merge Two Sorted Lists
// Link: https://leetcode.com/problems/merge-two-sorted-lists
// Time Complexity: O(N)
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
    
    ListNode* solve(ListNode* first, ListNode* second) {
        
        if(first->next == NULL) {
            first->next = second;
            return first;
        }
        
        ListNode* curr1 = first->next;
        ListNode* prev1 = first;
        ListNode* curr2 = second->next;
        ListNode* prev2 = second;
        
        while(curr1 && prev2) {
            if((prev1->val <= prev2->val) && (prev1->next->val >= prev2->val)) {
                prev1->next = prev2;
                curr2 = prev2->next;
                prev2->next = curr1;
                prev1 = prev1->next;
                prev2 = curr2;
            } else {
                prev1 = prev1->next;
                curr1 = curr1->next;
                if(curr1 == NULL) {
                    prev1->next = prev2;
                    return first;
                }
            }
        }
        return first;
    }
    
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;
        
        ListNode* result = NULL;
        
        if(list1->val > list2->val) result = solve(list2, list1);
        else result = solve(list1, list2);
        
        return result;
    }
};