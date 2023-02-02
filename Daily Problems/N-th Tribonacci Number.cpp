// N-th Tribonacci Number
// Link: https://leetcode.com/problems/n-th-tribonacci-number/
// Time Complexity: O(N)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int tribonacci(int n) {
        long long int a = 0, b = 1, c = 1;
        if(n == 0) return a;
        if(n == 1 || n == 2) return b;
        for(int i = 3; i <= n; i++) {
            long long int temp = c;
            c = a + b + c;
            a = b;
            b = temp;
        }
        return c;
    }
};