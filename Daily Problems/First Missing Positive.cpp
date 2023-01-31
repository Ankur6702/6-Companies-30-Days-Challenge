// First Missing Positive
// Link: https://leetcode.com/problems/first-missing-positive
// Time Complexity: O(NlogN)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        long long int val = 1;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > val) return val;
            else if (nums[i] == val) val++;
        }
        return val;
    }
};