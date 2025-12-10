/*
Problem: Search in Rotated Sorted Array
Link: https://neetcode.io/problems/find-target-in-rotated-sorted-array/question
Date: 2025-12-10
*/

class Solution {
public:
    int search(vector<int>& v, int target) {

   int l = 0, r = (int)v.size() - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (v[mid] == target) return mid;

     
        if (v[l] <= v[mid]) {
            if (target >= v[l] && target < v[mid])
                r = mid - 1;
            else
                l = mid + 1;
        }
        
        else {
            if (target > v[mid] && target <= v[r])
                l = mid + 1;
            else
                r = mid - 1;
        }
    }
    return -1;
    }
};

