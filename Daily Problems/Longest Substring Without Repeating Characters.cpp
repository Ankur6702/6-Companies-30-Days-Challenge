// Longest Substring Without Repeating Characters
// Link: https://leetcode.com/problems/longest-substring-without-repeating-characters
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> pos;
        int res = 0;
        // O(n) as we are storing the intex of element in map and if it gets repeated, we will jump directly to the previous index of element using the map without traversing the string.
        // If we store frequency and traverse the string from left end also, the time complexity will be O(n).
        for(int right = 0, left = 0; right < s.length(); right++) {
            if(pos[s[right]] > 0) left = max(left, pos[s[right]]);
            pos[s[right]] = right + 1;
            res = max(res, right - left + 1);
        }
        return res;
    }
};