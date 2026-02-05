/*
Problem: Implement Queue using Stacks
Link: https://neetcode.io/problems/implement-queue-using-stacks/history
Date: 2026-02-05
*/

#include <bits/stdc++.h>
using namespace std;

class MyQueue {
private:
    stack<int> inStack;   // for enqueue
    stack<int> outStack;  // for dequeue

public:
    MyQueue() {}

    // Push element x to the back of queue
    void push(int x) {
        inStack.push(x);
    }

    // Removes the element from the front of queue and returns it
    int pop() {
        if (outStack.empty()) {
            while (!inStack.empty()) {
                outStack.push(inStack.top());
                inStack.pop();
            }
        }
        int front = outStack.top();
        outStack.pop();
        return front;
    }

    // Get the front element
    int peek() {
        if (outStack.empty()) {
            while (!inStack.empty()) {
                outStack.push(inStack.top());
                inStack.pop();
            }
        }
        return outStack.top();
    }

    // Returns whether the queue is empty
    bool empty() {
        return inStack.empty() && outStack.empty();
    }
};

