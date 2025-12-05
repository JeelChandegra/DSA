/*
Problem: 56. Merge Intervals
Link: https://leetcode.com/problems/merge-intervals/submissions/1847477285/
Date: 2025-12-05
*/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        
        sort(v.begin(), v.end());  // sort by start time
        
        vector<vector<int>> ans;
        
        for (auto &interval : v) {
            // if ans is empty or current interval does not overlap
            if (ans.empty() || interval[0] > ans.back()[1]) {
                ans.push_back(interval);
            }
            else {
                // they overlap → merge using max end
                ans.back()[1] = max(ans.back()[1], interval[1]);
            }
        }
        
        return ans;
    }
};

