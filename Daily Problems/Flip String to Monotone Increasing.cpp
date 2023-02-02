// Flip String to Monotone Increasing
// Link: https://leetcode.com/problems/flip-string-to-monotone-increasing
// Time Complexity: O(N)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int m = 0;
        for (char c : s) {
            if (c == '0') ++m;
        }
        int ans = m;
        for (char c : s) {
            if (c == '0') ans = min(ans, --m);
            else ++m;
        }
        return ans;
    }
};