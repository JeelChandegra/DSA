/*
Problem: Subsets with a Target Sum
Link: chatgpt.com
Date: 2025-12-13
*/

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;

void dfs(int idx, vector<int>& nums, vector<int>& curr, int currSum, int target) {
    if (idx == nums.size()) {
        if (currSum == target)
            ans.push_back(curr);
        return;
    }

    // skip
    dfs(idx + 1, nums, curr, currSum, target);

    // take
    curr.push_back(nums[idx]);
    dfs(idx + 1, nums, curr, currSum + nums[idx], target);
    curr.pop_back(); // backtrack
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<int> curr;
    int target = 3;

    dfs(0, nums, curr, 0, target);

    for (auto &subset : ans) {
        cout << "{ ";
        for (int x : subset) cout << x << " ";
        cout << "}\n";
    }

    return 0;
}

