/*
Problem: Combination Sum
Link: https://neetcode.io/problems/combination-target-sum/question?list=neetcode150
Date: 2025-12-13
*/

class Solution {
public:
    vector<vector<int>> ans;

    void dfs(int target, int sum, vector<int>& nums, vector<int>& curr, int i) {
        if (sum == target) {
            ans.push_back(curr);
            return;
        }
        if (sum > target) return;

        for (int j = i; j < nums.size(); j++) {
            // take nums[j]
            curr.push_back(nums[j]);
            dfs(target, sum + nums[j], nums, curr, j); // reuse same number
            curr.pop_back(); // backtrack
        }
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> curr;
        dfs(target, 0, nums, curr, 0);
        return ans;
    }
};

