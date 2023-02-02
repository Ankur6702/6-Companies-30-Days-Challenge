// Maximum Split of Positive Even Integers
// Link: https://leetcode.com/problems/maximum-split-of-positive-even-integers
// Time Complexity: O(n)
// Space Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        vector<long long> ans;
        if(finalSum % 2 != 0) return ans;
        if(finalSum == 2) {
            ans.push_back(2);
            return ans;
        }
        long long sum = 2, evenNum = 2;
        while(finalSum >= sum) {
            ans.push_back(evenNum);
            evenNum += 2;
            sum += evenNum;
        }
        
        if(finalSum == sum) return ans;
        else {
            long long temp = sum - finalSum;
            ans[(temp/2) - 1] = evenNum;
        }
        
        return ans;
    }
};