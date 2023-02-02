// Delete Leaves With a Given Value
// Link: https://leetcode.com/problems/delete-leaves-with-a-given-value
// Time Complexity: O(n)
// Space Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    
    void solve(TreeNode* &root, int target) {
        if(!root || (!root->left and !root->right and root->val == target)) {
            root = NULL;
            return;
    }
        
        solve(root->left, target);
        solve(root->right, target);
        
        if(root->val == target and !root->left and !root->right){
            root = NULL;
            return;
        }
    }
    
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        solve(root, target);
        return root;
    }
};