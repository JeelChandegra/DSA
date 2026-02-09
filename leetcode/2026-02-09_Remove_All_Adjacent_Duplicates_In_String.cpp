/*
Problem: Remove All Adjacent Duplicates In String
Link: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/submissions/1913422966/
Date: 2026-02-09
*/

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;

    for (char i : s) {
        if (!st.empty() && st.top() == i) {
            st.pop();
        }
        else{
            st.push(i);
        }
    }

    // Stack stores result in reverse order
    string result = "";
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }

    reverse(result.begin(), result.end());
    return result;
    }
};
