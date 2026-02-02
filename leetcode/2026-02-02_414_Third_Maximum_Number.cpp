/*
Problem: 414. Third Maximum Number
Link: https://leetcode.com/problems/third-maximum-number/description/
Date: 2026-02-02
*/

class Solution {
public:
    int thirdMax(vector<int>& nums) {
    long long first = LLONG_MIN, second = LLONG_MIN, third = LLONG_MIN;

    for (long long x : nums) {
        if (x == first || x == second || x == third) continue; // skip duplicates

        if (x > first) {
            third = second;
            second = first;
            first = x;
        } else if (x > second) {
            third = second;
            second = x;
        } else if (x > third) {
            third = x;
        }
    }

    return (third == LLONG_MIN) ? first : third;
    }
};
