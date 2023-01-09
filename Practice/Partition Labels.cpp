// Partition Labels
// Link: https://leetcode.com/problems/partition-labels
// Time Complexity: O(n)
// Space Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.length();
        int prev = 0, index = 0;
        vector<int> ans, hash(26, 0);
        
        for(int i = 0; i < n; i++) {
            hash[s[i] - 'a'] = i;
        }
        
        for(int i = 0; i < n; i++) {
            index = max(index, hash[s[i] - 'a']);
            
            if(i == index) {
                ans.push_back(i - prev + 1);
                prev = i + 1;
            }
        }

        return ans;
    }
};