/*
Problem: Set Mismatch
Link: https://leetcode.com/problems/set-mismatch/submissions/1864746723/
Date: 2025-12-25
*/

class Solution {
public:
    vector<int> findErrorNums(vector<int>& v) {
        unordered_map<int,int> mp;

        for (int i = 0; i < v.size(); i++) {
            mp[v[i]]++;
        }

        int x = -1, y = -1;  
        int n = v.size();

        for (int i = 1; i <= n; i++) {
            if (mp[i] == 0)
                y = i;
            else if (mp[i] > 1)
                x = i;
        }

        vector<int> ans = {x, y};
        return ans;
    }
};

