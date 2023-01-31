// Rotate Image
// Link: https://leetcode.com/problems/rotate-image/
// Time Complexity: O(N^2)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        reverse(matrix.begin(), matrix.end());
            for(int i = 0; i < matrix.size(); i++){
                for(int j = i + 1; j < matrix[0].size(); j++)
                    swap(matrix[i][j], matrix[j][i]);
        }
    }
};