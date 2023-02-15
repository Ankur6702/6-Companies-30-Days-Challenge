// Valid Sudoku
// Link: https://leetcode.com/problems/valid-sudoku/
// Time Complexity: O(1) as we are iterating over a 9x9 matrix
// Space Complexity: O(1)
#include<bits/stdc++.h>
using namespace std;

// k = i / 3 * 3 + j / 3 is used to find the block number in the sudoku
class Solution {
public:
    bool isValidSudoku(vector<vector<char> > &board) {
        int used1[9][9] = {0}, used2[9][9] = {0}, used3[9][9] = {0};
        for(int i = 0; i < 9; ++ i)
            for(int j = 0; j < 9; ++ j)
                if(board[i][j] != '.') {
                    int num = board[i][j] - '0' - 1, k = i / 3 * 3 + j / 3;
                    if(used1[i][num] || used2[j][num] || used3[k][num]) return false;
                    used1[i][num] = used2[j][num] = used3[k][num] = 1;
                }
        
        return true;
    }
};