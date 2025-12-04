/*
Problem: Valid Palindrome
Link: https://neetcode.io/problems/is-palindrome/question
Date: 2025-12-04
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.size() - 1;

        while (left < right) {
           
            while (left < right && !isalnum(s[left])) left++;
            while (left < right && !isalnum(s[right])) right--;

           
            if (tolower(s[left]) != tolower(s[right]))
                return false;

            left++;
            right--;
        }

        return true;
    }
};

