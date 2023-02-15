// Add to Array-Form of Integer
// Link: https://leetcode.com/problems/add-to-array-form-of-integer/
// Time Complexity: O(N) where N is the size of the array
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        for(int i = num.size() - 1; i >= 0; i--) {
            num[i] += k;
            k = num[i] / 10;
            num[i] %= 10;
        }
        while(k > 0){
            num.insert(num.begin(), k % 10);
            k /= 10;
        }
        return num;
    }
};