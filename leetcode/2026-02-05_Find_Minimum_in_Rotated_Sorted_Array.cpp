/*
Problem: Find Minimum in Rotated Sorted Array
Link: https://neetcode.io/problems/find-minimum-in-rotated-sorted-array/history
Date: 2026-02-05
*/

class Solution {
public:
    int findMin(vector<int> &nums) {
        int low = 0, high = nums.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;
            cout<<mid<<" "<<nums[mid]<<" ";

            if (nums[mid] > nums[high]) {
                // minimum is in right part
                low = mid + 1;
            } else {
                // minimum is at mid or left part
                high = mid;
            }
        }
        return nums[low];
    } 
};

