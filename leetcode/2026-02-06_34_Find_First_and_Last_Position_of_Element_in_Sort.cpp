/*
Problem: 34. Find First and Last Position of Element in Sorted Array
Link: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
Date: 2026-02-06
*/

class Solution {
public:
    vector<int> searchRange(vector<int>& v, int target) {
        int n = v.size();
        vector<int> ans(2, -1);

        // First occurrence
        int left = 0, right = n - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (v[mid] == target) {
                ans[0] = mid;
                right = mid - 1;   // move left
            } else if (v[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        // Last occurrence
        left = 0, right = n - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (v[mid] == target) {
                ans[1] = mid;
                left = mid + 1;   // move right
            } else if (v[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return ans;
    }
};
