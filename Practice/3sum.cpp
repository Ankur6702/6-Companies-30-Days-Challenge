// 3 sum
// Link: https://leetcode.com/problems/3sum
// Time Complexity: O(n^2)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < n; i++) {
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            
            int start = i, next = i + 1, end = n - 1;
            while(next < end) {
                int sum = nums[start] + nums[end] + nums[next];
                if(sum == 0) {
                    ans.push_back({nums[start], nums[next], nums[end]});
                    while(nums[end] == nums[end - 1] && end > next) end -= 1;
                    while(nums[next] == nums[next + 1] && end > next) next += 1;
                    end -= 1;
                    next += 1;
                }
                else if(sum > 0) end -= 1;
                else if(sum < 0) next += 1;
            }
        }
        return ans;
    }
};