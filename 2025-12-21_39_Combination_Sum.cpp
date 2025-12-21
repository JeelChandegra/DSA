/*
Problem: 39. Combination Sum
Link: https://leetcode.com/problems/combination-sum/description/
Date: 2025-12-21
*/

class Solution {
public:
  void dfs(vector<int>& candidates, vector<int>& temp, vector<vector<int>>& result,
             int target, int index, int sum) {
        if (sum == target) {
            result.push_back(temp);
            return;
        }
        if (sum > target || index == candidates.size()) return;

        // --- Choose the current element (reuse allowed) ---
        temp.push_back(candidates[index]);  
        dfs(candidates, temp, result, target, index, sum + candidates[index]); // same index for reuse
        temp.pop_back(); // backtrack

        // --- Don’t choose the current element ---
        dfs(candidates, temp, result, target, index + 1, sum);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
         vector<vector<int>> result;
        vector<int> temp;
        dfs(candidates, temp, result, target, 0, 0); // sum starts at 0
        return result;
    }
};
