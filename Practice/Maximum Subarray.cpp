// Maximum Subarray
// Link: https://leetcode.com/problems/maximum-subarray/
// Time Complexity: O(N) where N is the size of the array
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0, maxSumSubarray = INT_MIN;
        for(auto num : nums){
            currSum += num;
            maxSumSubarray = max(currSum, maxSumSubarray);
            if(currSum < 0) currSum = 0;
        }
        return maxSumSubarray;
    }
};
