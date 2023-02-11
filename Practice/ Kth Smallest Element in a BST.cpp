//  Kth Smallest Element in a BST
// Link: https://leetcode.com/problems/kth-smallest-element-in-a-bst/
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
    vector<int> tree;
    void inorderTraversal(TreeNode* root, int k) {
        if(root == NULL) return;
        inorderTraversal(root->left, k);
        tree.push_back(root->val);
        inorderTraversal(root->right, k);
    }
    int kthSmallest(TreeNode* root, int k) {
        inorderTraversal(root, k);
        return tree[k - 1];
    }
};