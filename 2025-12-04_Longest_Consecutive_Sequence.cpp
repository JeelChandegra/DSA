/*
Problem: Longest Consecutive Sequence
Link: https://neetcode.io/problems/longest-consecutive-sequence/question
Date: 2025-12-04
*/

#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    unordered_set<int> s(nums.begin(), nums.end());
    int maxLen = 0;

    for (int num : s) {
        // Only start from the beginning of a sequence
        if (s.find(num-1) == s.end()) {
            int current = num;
            int len = 1;
            while (s.find(current + 1) != s.end()) {
                current++;
                len++;
            }
            maxLen = max(maxLen, len);
        }
    }
    return maxLen;
}

int main() {
    vector<int> nums = {2,20,4,10,3,4,5};
    cout << longestConsecutive(nums) << "\n"; // Output: 4
}

