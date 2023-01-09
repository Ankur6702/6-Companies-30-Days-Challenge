// Maximal Score After Applying K Operations
// Link: https://leetcode.com/problems/maximal-score-after-applying-k-operations
// Time Complexity: O(nlogn)
// Space Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> q;
        long long ans = 0;
        for(int i = 0; i < nums.size(); i++) q.push(nums[i]);
        while(k--) {
            int val = q.top();
            ans += val;
            double change = val / 3.0;
            q.pop();
            q.push(ceil(change));
        }
        return ans;
    }
};