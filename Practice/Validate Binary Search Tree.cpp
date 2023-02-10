// Validate Binary Search Tree
// Link: https://leetcode.com/problems/validate-binary-search-tree/
// Time Complexity: O(N) because we need to traverse the tree.
// Space Complexity: O(h) where h is the height of the tree. Because we need to store the recursive stack.

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
    bool helper(TreeNode* root,long low ,long high){
        if(root == NULL) return true;

        if((root->val < high) && (root->val > low))
            return (helper(root->left, low, root->val) && helper(root->right, root->val, high));
        else return false;
    }
    
    bool isValidBST(TreeNode* root) {
        bool ans = helper(root, LONG_MIN, LONG_MAX);
        return ans;
    }
};