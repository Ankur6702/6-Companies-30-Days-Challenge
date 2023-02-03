// Longest Consecutive Sequence
// Link: https://leetcode.com/problems/longest-consecutive-sequence/
// Time Complexity: O(N)
// Space Complexity: O(N)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end()); // this is faster
        // for(auto ele : nums) s.insert(ele);
        
        int longest_sequence = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(s.find(nums[i] - 1) == s.end()) {
                int count = 0;
                int current_element = nums[i];
                
                while(s.find(current_element) != s.end()) {
                    count++;
                    current_element++;
                }

                longest_sequence = max(longest_sequence,count);
            }
        }
        
        return longest_sequence;
    }
};