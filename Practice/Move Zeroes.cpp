// Move Zeroes
// Link: https://leetcode.com/problems/move-zeroes
// Time Complexity: O(N)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cnt = 0, j = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            if(nums[i] != 0) {
                nums[j] = nums[i];
                j++;
            } else cnt++;
        }
        for(int i = 0; i < cnt; i++) {
            nums[n - i - 1] = 0;
        }
    }
};