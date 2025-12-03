/*
Problem: Valid Anagram
Link: http://neetcode.io/problems/is-anagram/question?list=neetcode150
Date: 2025-12-03
*/

#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    if (s.length() != t.length()) return false;

    vector<int> freq(26, 0);

    for (char c : s)
        freq[c - 'a']++;

    for (char c : t)
        freq[c - 'a']--;

    // If any count is not zero, not an anagram
    for (int x : freq)
        if (x != 0) 
            return false;

    return true;
}

int main() {
    string s = "racecar";
    string t = "carrace";

    cout << (isAnagram(s, t) ? "true" : "false");
}

