/*
Problem: 40. Combination Sum II
Link: https://leetcode.com/problems/combination-sum-ii/description/
Date: 2025-12-21
*/

class Solution {
public:

    void dfs(vector<int>& candidates, int target, int index, int sum, 
             vector<int>& temp, vector<vector<int>>& result) {
        if (sum == target) {
            result.push_back(temp);
            return;
        }
        if (sum > target || index == candidates.size()) return;

        // --- Choose the current element ---
        temp.push_back(candidates[index]);
        dfs(candidates, target, index + 1, sum + candidates[index], temp, result);
        temp.pop_back();

        // --- Don’t choose the current element, skip duplicates ---
        int nextIndex = index + 1;
        while (nextIndex < candidates.size() && candidates[nextIndex] == candidates[index])
            nextIndex++;
        dfs(candidates, target, nextIndex, sum, temp, result);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end()); // sort to handle duplicates
        vector<int> temp;
        vector<vector<int>> mainv;
        dfs(candidates, target, 0, 0, temp, mainv);
        return mainv; // must return the result
    }
};

