/*
Problem: Subsets II
Link: https://leetcode.com/problems/subsets-ii/
Date: 2025-12-12
*/

class Solution {
public:

void solve(vector<int>& v, vector<int>& sub, int i, vector<vector<int>>& ans) {
    ans.push_back(sub);
    
    for(int j = i; j < v.size(); j++) {

        // skip duplicates
        if(j > i && v[j] == v[j-1]) continue;

        sub.push_back(v[j]);
        solve(v, sub, j + 1, ans);
        sub.pop_back();
    }
}

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<int> sub;
    vector<vector<int>> ans;
    solve(nums, sub, 0, ans);
    return ans;
}
};

