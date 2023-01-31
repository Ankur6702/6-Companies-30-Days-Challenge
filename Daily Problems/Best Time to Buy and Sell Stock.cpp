// Best Time to Buy and Sell Stock
// Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock
// Time Complexity: O(N)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, j = 0;
        for(int i = 1; i < prices.size(); i++) {
            if(prices[i] > prices[j]) 
                profit = max(profit, prices[i] - prices[j]);
            else j = i;
        }
        return profit;
    }
};