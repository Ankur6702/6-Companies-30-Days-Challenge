// Minimize Maximum Pair Sum in Array
// Link: https://leetcode.com/problems/minimize-maximum-pair-sum-in-array
// Time Complexity: O(nlogn)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int start = 0, end = n - 1, ans = 0;
        while(start < end) {
            ans = max(nums[start] + nums[end], ans);
            start++;
            end--;
        }
        return ans;
    }
};