// Max Increase to Keep City Skyline
// Link: https://leetcode.com/problems/max-increase-to-keep-city-skyline
// Time Complexity: O(n^2)
// Space Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:  
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n = grid[0].size();
        int ans = 0;
        
        vector<int> rowMax(n, 0), colMax(n, 0);

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                rowMax[i] = max(rowMax[i], grid[i][j]);
                colMax[i] = max(colMax[i], grid[j][i]);
            }
        } 
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                int temp = min(rowMax[i], colMax[j]);
                if(grid[i][j] != temp) {
                    ans +=  temp - grid[i][j];
                }
                grid[i][j] = temp;
            }
        }
        return ans;
    }
};