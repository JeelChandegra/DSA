/*
Problem: 242. Valid Anagram
Link: https://leetcode.com/problems/valid-anagram/description/
Date: 2025-12-09
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
         if (s.size() != t.size()) {
        return false;
    }

    unordered_map<char, int> mp;

    for (char c : s)
        mp[c]++;

    for (char c : t)
        mp[c]--;

    for (auto &p : mp) {
        if (p.second != 0) {
            
            return false;
        }
    }

    return true;
    }
};
