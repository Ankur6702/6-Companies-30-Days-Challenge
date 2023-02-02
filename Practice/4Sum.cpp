// 4 Sum
// Link: https://leetcode.com/problems/4sum
// Time Complexity: O(N^3)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> ans;
        if(n == 0) return ans;
        sort(nums.begin(), nums.end());

        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                int left = j + 1, right = n - 1;
                ll twoSum = target - (ll)nums[i] - nums[j];
                while(left < right) {
                    if(nums[left] + nums[right] > twoSum)
                        right--;
                    else if(nums[left] + nums[right] < twoSum) 
                        left++;
                    else {
                        vector<int>res;
                        res.push_back(nums[i]);
                        res.push_back(nums[j]);
                        res.push_back(nums[left]);
                        res.push_back(nums[right]);
                        ans.push_back(res);
                        
                        // To ensure no repetitive tasks
                        while(left < right && nums[left] == res[2]) 
                            left++;
                        while(left < right && nums[right] == res[3])
                            right--;
                    }                    
                }
                // To ensure no repetitive tasks
                while(j + 1 < n && nums[j] == nums[j + 1]) j++;
            }
            // To ensure no repetitive tasks
            while(i + 1 < n && nums[i] == nums[i + 1]) i++;
        }
        return ans;
    }
};