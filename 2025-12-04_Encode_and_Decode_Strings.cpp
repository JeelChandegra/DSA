/*
Problem: Encode and Decode Strings
Link: https://neetcode.io/problems/string-encode-and-decode/history
Date: 2025-12-04
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // ENCODE: convert list of strings to one string
    string encode(vector<string>& strs) {
        string encoded = "";
        for (auto &s : strs) {
            encoded += to_string(s.size()) + "#" + s;
        }
        return encoded;
    }

    // DECODE: convert the encoded string back to list of strings
    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;

        while (i < s.size()) {
            // find position of '#' which separates length from string
            int j = i;
            while (s[j] != '#') j++;

            // length of the string
            int length = stoi(s.substr(i, j - i));

            // extract the string using the length
            string word = s.substr(j + 1, length);
            result.push_back(word);

            // move i to the start of the next segment
            i = j + 1 + length;
        }

        return result;
    }
};

