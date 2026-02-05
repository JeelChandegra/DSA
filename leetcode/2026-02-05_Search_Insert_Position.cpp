/*
Problem: Search Insert Position
Link: https://neetcode.io/problems/search-insert-position/history
Date: 2026-02-05
*/

class Solution {
public:
    int searchInsert(vector<int>& v, int target) {
     int ans = v.size();   // default: insert at end

    for (int i = 0; i < v.size(); i++) {
        if (v[i] >= target) {
            ans = i;
            break;
        }
    }

    return ans;
    }
};
