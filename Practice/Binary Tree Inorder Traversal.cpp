// Binary Tree Inorder Traversal
// Link: https://leetcode.com/problems/binary-tree-inorder-traversal/
// Time Complexity: O(N) because we need to traverse the tree.
// Space Complexity: O(N) because we need to store the inorder traversal.

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
    void traverseInorder(TreeNode* root, vector<int> &ans) {
        if(root == NULL) return;
        traverseInorder(root->left, ans);
        ans.push_back(root->val);
        traverseInorder(root->right, ans);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        traverseInorder(root, ans);
        return ans;
    }
};