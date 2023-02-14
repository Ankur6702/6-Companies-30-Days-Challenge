// Container With Most Water
// Link: https://leetcode.com/problems/container-with-most-water/
// Time Complexity: O(N)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0, right = n - 1, maxm = INT_MIN;
        while(right > left) {
            maxm = max(min(height[left], height[right]) * (right - left), maxm);
            if(height[right] > height[left]) left++;
            else right--;
        }
        return maxm;
    }
};