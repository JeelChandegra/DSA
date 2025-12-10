/*
Problem: Minimum Stack
Link: https://neetcode.io/problems/minimum-stack/question
Date: 2025-12-10
*/

class MinStack {
public:
    vector<int> st;
    vector<int> mn;

    MinStack() { }

    void push(int val) {
        st.push_back(val);
        if (mn.empty() || val <= mn.back()) {
            mn.push_back(val);
        }
    }

    void pop() {
        if (!st.empty()) {
            if (st.back() == mn.back()) {
                mn.pop_back();
            }
            st.pop_back();
        }
    }

    int top() {
        return st.back();
    }

    int getMin() {
        return mn.back();
    }
};

