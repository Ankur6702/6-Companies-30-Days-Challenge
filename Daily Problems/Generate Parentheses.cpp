// Generate Parentheses
// Link: https://leetcode.com/problems/generate-parentheses
// Time Complexity: O(2^n)
// Space Complexity: O(2^n)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(int n, int m, vector<string> &res, string temp) {
        if(n == 0 && m == 0) {
            res.push_back(temp);
            return;
        }
                
        if(n) {
            string temp1 = temp + "(";
            solve(n - 1, m, res, temp1);
        }
        
        if(m > n) {
            string temp2 = temp + ")";
            solve(n, m - 1, res, temp2);
        }
        return;
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        solve(n, n, res, "");      
        return res;
    }
};