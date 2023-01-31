// Set Matrix Zeroes
// Link: https://leetcode.com/problems/set-matrix-zeroes
// Time Complexity: O(N^2)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        
        int jz = 1, iz = 1;
        for(int i = 0; i < n; i++) {
            if(matrix[i][0] == 0) {
                iz = 0;
                break;
            }
        }
        
        for(int j = 0; j < m; j++) {
            if(matrix[0][j] == 0) {
                jz = 0;
                break;
            }
        }
        
        for(int i = 1; i < n; i++) {
            for(int j = 1; j < m; j++) {
                if(matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        
        for(int i = 1; i < n; i++) {
            if(matrix[i][0] == 0) {
                for(int j = 1; j < m; j++) {
                    matrix[i][j] = 0;
                }
            }
        }
        
        for(int j = 1; j < m; j++) {
            if(matrix[0][j] == 0) {
                for(int i = 1; i < n; i++) {
                    matrix[i][j] = 0;
                }
            }
        }
        
        if(iz == 0 && jz == 0) {
            for(int i = 0; i < n; i++) {
                matrix[i][0] = 0;
            }
            for(int j = 0; j < m; j++) {
                matrix[0][j] = 0;
            }
        }
        
        if(iz == 0) {
            for(int i = 0; i < n; i++) {
                matrix[i][0] = 0;
            }
        }
        
        if(jz == 0) {
            for(int j = 0; j < m; j++) {
                matrix[0][j] = 0;
            }
        }
    }
};