// Single Element in a Sorted Array
// Link: https://leetcode.com/problems/single-element-in-a-sorted-array/
// Time Complexity: O(logN)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        int low = 0, high = nums.size() - 1;
        
        if (nums[0] != nums[1]) return nums[0];
        if (nums[high] != nums[high- 1]) return nums[high];
        
        while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
            return nums[mid];
        else if ((nums[mid] == nums[mid + 1] && mid % 2 == 0) || (nums[mid] == nums[mid - 1] && mid % 2 != 0))
                low = mid + 1;
            else
                high = mid - 1;
        }
    
        return nums[low];
    }
};