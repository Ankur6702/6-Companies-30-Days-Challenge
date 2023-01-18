// Maximum Sum Circular Subarray
// Link: https://leetcode.com/problems/maximum-sum-circular-subarray
// Time Complexity: O(N) // N = Number of elements in the array
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int cur_max = 0, cur_min = 0, sum = 0, max_sum = nums[0], min_sum = nums[0];
        for (int num : nums) {
            cur_max = max(cur_max, 0) + num;
            max_sum = max(max_sum, cur_max);
            cur_min = min(cur_min, 0) + num;
            min_sum = min(min_sum, cur_min);
            sum += num;
        }
        return sum == min_sum ? max_sum : max(max_sum, sum - min_sum);
    }
};