/*
Problem: Contains Duplicate
Link: https://neetcode.io/problems/duplicate-integer/question?list=neetcode150
Date: 2025-12-03
*/

#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> st;

    for (int x : nums) {
        if (st.count(x)) return true; // already exists
        st.insert(x);
    }

    return false; // no duplicates
}

int main() {
    vector<int> nums = {1, 2, 3, 1};
    cout << (containsDuplicate(nums) ? "true" : "false");
}

