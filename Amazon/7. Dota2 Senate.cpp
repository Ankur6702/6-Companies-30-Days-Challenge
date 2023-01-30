// Dota2 Senate
// Link: https://leetcode.com/problems/dota2-senate/
// Time Complexity: O(N)
// Space Complexity: O(N)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> q1, q2;
        int n = senate.length();
        for(int i = 0; i<n; i++)
            (senate[i] == 'R')?q1.push(i):q2.push(i);
        while(!q1.empty() && !q2.empty()){
            int r_index = q1.front(), d_index = q2.front();
            q1.pop(); 
            q2.pop();
            (r_index < d_index) ? q1.push(r_index + n) : q2.push(d_index + n);
        }
        return (q1.size() > q2.size()) ? "Radiant" : "Dire";
    }
};