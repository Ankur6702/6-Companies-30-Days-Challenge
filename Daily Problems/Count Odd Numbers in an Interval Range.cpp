// Count Odd Numbers in an Interval Range
// Link: https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/
// Time Complexity: O(1)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countOdds(int low, int high) {
        int numbers = high - low + 1;
        if(low % 2 != 0 && high % 2 != 0) return numbers / 2 + 1;
        return numbers / 2;
    }
};