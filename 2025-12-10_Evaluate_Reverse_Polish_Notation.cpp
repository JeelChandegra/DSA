/*
Problem: Evaluate Reverse Polish Notation
Link: https://neetcode.io/problems/evaluate-reverse-polish-notation/question
Date: 2025-12-10
*/

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
         stack<int> st;

    for (auto &t : tokens) {
        if (t == "+" || t == "-" || t == "*" || t == "/") {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();
            int res;

            if (t == "+") res = a + b;
            else if (t == "-") res = a - b;
            else if (t == "*") res = a * b;
            else res = a / b;  

            st.push(res);
        } 
        else {
            st.push(stoi(t));
        }
    }

    return st.top();
    }
};

