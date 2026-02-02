/*
Problem: Merge Strings Alternately
Link: https://neetcode.io/problems/merge-strings-alternately/history
Date: 2026-02-02
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mergeAlternately(string s, string x) {
        int i = 0, j = 0;
        string res;
        res.reserve(s.size() + x.size()); // pre-allocate memory

        while (i < s.size() || j < x.size()) {
            if (i < s.size()) res += s[i++];
            if (j < x.size()) res += x[j++];
        }

        return res;
    }
};

