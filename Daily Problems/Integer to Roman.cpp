// Integer to Roman
// Link: https://leetcode.com/problems/integer-to-roman
// Time Complexity: O(1)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    string getChar(int rem, int count) {
        if(count == 1) {
            if(rem == 1) return "I";
            if(rem == 2) return "II";
            if(rem == 3) return "III";
            if(rem == 4) return "IV";
            if(rem == 5) return "V";
            if(rem == 6) return "VI";
            if(rem == 7) return "VII";
            if(rem == 8) return "VIII";
            if(rem == 9) return "IX";
            if(rem == 0) return "";
        }
        if(count == 2) {
            if(rem == 1) return "X";
            if(rem == 2) return "XX";
            if(rem == 3) return "XXX";
            if(rem == 4) return "XL";
            if(rem == 5) return "L";
            if(rem == 6) return "LX";
            if(rem == 7) return "LXX";
            if(rem == 8) return "LXXX";
            if(rem == 9) return "XC";
            if(rem == 0) return "";
        }
        if(count == 3) {
            if(rem == 1) return "C";
            if(rem == 2) return "CC";
            if(rem == 3) return "CCC";
            if(rem == 4) return "CD";
            if(rem == 5) return "D";
            if(rem == 6) return "DC";
            if(rem == 7) return "DCC";
            if(rem == 8) return "DCCC";
            if(rem == 9) return "CM";
            if(rem == 0) return "";
        }
        if(count == 4) {
            if(rem == 1) return "M";
            if(rem == 2) return "MM";
            if(rem == 3) return "MMM";
        }
        return "";
    }
    
    string intToRoman(int num) {
        string res = "";
        int count = 1;
        while(num) {
            int rem = num % 10;
            res = getChar(rem, count) + res;
            num /= 10;
            count++;
        }
        return res;
    }
};