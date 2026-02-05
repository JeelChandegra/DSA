/*
Problem: Longest Substring Without Repeating Characters
Link: https://neetcode.io/problems/longest-substring-without-duplicates/history
Date: 2026-02-05
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         int left=0;
         int n =s.size()-1;
        unordered_set<int>st;
   int maxLen=0;
   for(int i=0;i<=n;i++){
        while(st.count(s[i])){
            st.erase(s[left]);
            left++;
            
        }
        st.insert(s[i]);
        maxLen = max(maxLen,i-left+1);

   }
   return maxLen;
    }
};

