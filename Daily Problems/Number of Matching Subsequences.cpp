// Number of Matching Subsequences
// Link: https://leetcode.com/problems/number-of-matching-subsequences
// Time Complexity: O(n^2)
// Space Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        int cnt = 0;
        int m = s.length();
        unordered_map<string, bool> str;
        
        for(int i =0; i < words.size(); i++) {
            if(str.find(words[i]) != str.end()) {
                if(str[words[i]]) cnt++;
                continue;
            }
            int n = words[i].length();
            int first = 0, second = 0;
            while(first < n && second < m) {
                if(words[i][first] == s[second]) {
                    first++;
                    second++;
                } else second++;
            }
            if(first == n) {
                cnt++;
                str[words[i]] = true;
            } else str[words[i]] = false;
        }
        return cnt;
    }
};