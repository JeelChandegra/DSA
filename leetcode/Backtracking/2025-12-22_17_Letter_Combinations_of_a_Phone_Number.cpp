/*
Problem: 17. Letter Combinations of a Phone Number
Link: https://leetcode.com/problems/letter-combinations-of-a-phone-number/
Date: 2025-12-22
*/

class Solution {
public:
 vector<string> ans;

    vector<string> mp = {
        "",     
        "",     
        "abc",  
        "def",  
        "ghi",  
        "jkl",  
        "mno",  
        "pqrs", 
        "tuv",  
        "wxyz"  
    };

    void backtrack(string &digits, int idx, string &curr) {
       
        if (idx == digits.size()) {
            ans.push_back(curr);
            return;
        }

        int digit = digits[idx] - '0';

        for (char ch : mp[digit]) {
            curr.push_back(ch);
            backtrack(digits, idx + 1, curr);
            curr.pop_back(); 
        }
    }

    vector<string> letterCombinations(string digits) {
         if (digits.empty()) return {};

        string curr = "";
        backtrack(digits, 0, curr);
        return ans;
    }
};
