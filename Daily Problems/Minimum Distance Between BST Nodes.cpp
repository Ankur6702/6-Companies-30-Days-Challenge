// Minimum Distance Between BST Nodes
// Link: https://leetcode.com/problems/minimum-distance-between-bst-nodes/
// Time Complexity: O(N)
// Space Complexity: O(N)

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
    void traverse(TreeNode* root, vector<int> &elements) {
        if(root == NULL) return;
        traverse(root->left, elements);
        elements.push_back(root->val);
        traverse(root->right, elements);
    }

    int minDiffInBST(TreeNode* root) {
        int ans = INT_MAX;
        vector<int> elements;
        traverse(root, elements);
        sort(elements.begin(), elements.end());
        for(int i = 1; i < elements.size(); i++) {
            ans = min(ans, abs(elements[i] - elements[i - 1]));
        }
        return ans;
    }
};