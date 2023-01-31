// Maximum Number of Visible Points
// Link: https://leetcode.com/problems/maximum-number-of-visible-points
// Time Complexity: O(nlogn)
// Space Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int visiblePoints(vector<vector<int>>& points, int angle, vector<int>& location) {
        vector<double> angles;
        int samePoints=0;
        for(auto point:points) {
            if(point[0]==location[0] && point[1]==location[1])
                samePoints++;
            else {
                double ang = atan2(point[1]-location[1], point[0]-location[0]) * 180.0 /M_PI;
                if(ang < 0)
                    ang += 360;
                angles.push_back(ang);
            }
        }
        sort(angles.begin(), angles.end());
        int n=angles.size();   
        int l = 0, maxInRange=0;
        
        for (int i = 0; i < n; i++) {
            angles.push_back(angles[i] + 360);
        }
    
        for(int r=0; r<angles.size(); r++) {
            while((angles[r]-angles[l])>angle)
                l++;
            maxInRange = max(maxInRange, r-l+1);
        }
        return maxInRange + samePoints;
    }
};