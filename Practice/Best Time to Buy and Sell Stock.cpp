// Best Time to Buy and Sell Stock
// Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// Time Complexity: O(N) where N is the size of the array
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minm = INT_MAX;
        int ans = -1;
        for(int i = 0; i < prices.size(); i++){
            minm = min(minm, prices[i]);
            ans = max(ans, prices[i] - minm);
        }
        return ans;
    }
};

// Alternative Solution
// Time Complexity: O(N) where N is the size of the array
// Space Complexity: O(N)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0, n = prices.size();
        vector<int> maxm(n);
        maxm[n - 1] = prices[n - 1];
        for(int i = n - 2; i >= 0; i--) {
            if(prices[i] > maxm[i + 1]) maxm[i] = prices[i];
            else maxm[i] = maxm[i + 1];
        }
        for(int i = 0; i < n; i++) {
            ans = max(ans, maxm[i] - prices[i]);
        }
        return ans;
    }
};