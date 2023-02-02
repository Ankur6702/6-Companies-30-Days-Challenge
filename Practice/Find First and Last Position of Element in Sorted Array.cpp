// Find First and Last Position of Element in Sorted Array
// Link: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
// Time Complexity: O(logN)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int binarySearchLeft(vector<int>& nums, int target){
        int left = 0, right = nums.size();
        int mid = 0, idx = -1;
        while(left < right){
            mid = (left + right) / 2;
            if(nums[mid] == target) {
                idx = mid;
                right = mid;
            }
            else if(nums[mid] > target) right = mid;
            else left = mid+1;
        }
        return idx;
    }

    int binarySearchRight(vector<int>& nums, int target){
        int left = 0, right = nums.size();
        int mid = 0, idx = -1;
        while(left < right){
            mid = (left + right) / 2;
            if(nums[mid] == target){
                idx = mid;
                left = mid + 1;
            }
            else if(nums[mid] > target) right = mid;
            else left = mid+1;
        }
        return idx;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> arr(2,-1);
        arr[0] = binarySearchLeft(nums, target);
        arr[1] = binarySearchRight(nums, target);
        return arr;
    }
};