/*
Problem:  Subsets
Link: https://leetcode.com/problems/subsets/
Date: 2025-12-12
*/

class Solution {
public:

void print(vector<int>&v,vector<int>&sub,int i,vector<vector<int>>&ans){
    if (i==v.size())
    {
      ans.push_back({sub});
      return;
    }

    sub.push_back(v[i]);

    print(v,sub,i+1,ans);
        sub.pop_back();
    print(v,sub,i+1,ans);



}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>sub;
        print(nums,sub,0,ans);
        return ans;
    }
};
