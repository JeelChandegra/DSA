/*
Problem: Verifying An Alien Dictionary
Link: https://leetcode.com/problems/verifying-an-alien-dictionary/description/
Date: 2025-12-24
*/

class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        // Step 1: map each character to its rank
        vector<int> rank(26);
        for (int i = 0; i < 26; i++) {
            rank[order[i] - 'a'] = i;
        }

        // Step 2: compare adjacent words
        for (int i = 0; i < words.size() - 1; i++) {
            string w1 = words[i];
            string w2 = words[i + 1];

            int len = min(w1.size(), w2.size());
            bool differentFound = false;

            for (int j = 0; j < len; j++) {
                if (w1[j] != w2[j]) {
                    if (rank[w1[j] - 'a'] > rank[w2[j] - 'a']) {
                        return false;
                    }
                    differentFound = true;
                    break;
                }
            }

           
            if (!differentFound && w1.size() > w2.size()) {
                return false;
            }
        }

        return true;
    }
};

