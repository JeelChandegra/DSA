/*
Problem: 151. Reverse Words in a String
Link: https://leetcode.com/problems/reverse-words-in-a-string/description/
Date: 2025-12-09
*/

class Solution {
public:
    string reverseWords(string s) {
        string new_s = "";
        string word = "";

        for (int i = s.size() - 1; i >= 0; i--) {
            
            if (s[i] != ' ') {
                word += s[i];           
            }
            else {
                if (!word.empty()) {
                    reverse(word.begin(), word.end()); 
                    if (!new_s.empty()) new_s += ' ';
                    new_s += word;
                    word = "";
                }
            }
        }

       
        if (!word.empty()) {
            reverse(word.begin(), word.end());
            if (!new_s.empty()) new_s += ' ';
            new_s += word;
        } return new_s;


    }
};
