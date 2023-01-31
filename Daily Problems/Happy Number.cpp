// Happy Number
// Link: https://leetcode.com/problems/happy-number
// Time Complexity: O(n)
// Space Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int, int> mp;
        int sum = n;
        mp[n]++;
        while(1) {
            int m = sum;
            sum = 0;
            while(m) {
                int temp = m % 10;
                sum += temp * temp;
                m /= 10;
            }
            if(sum == 1) return true;
            if(mp[sum] > 0) return false;
            mp[sum]++;
        }
    }
};