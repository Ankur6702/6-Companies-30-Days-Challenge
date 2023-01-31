// Convert Binary Number in a Linked List to Integer
// Link: https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer 
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
    int getDecimalValue(ListNode* head) {
        vector<int>arr;
        ListNode* temp = head;
        while(temp) {
            arr.push_back(temp->val);
            temp = temp->next;
        }
        long long int a = 1, res = 0;
        int n = arr.size();
        for(int i = n - 1; i >= 0; i--) {
            res += arr[i] * a;
            a *= 2;
        }
        return res;
    }
};