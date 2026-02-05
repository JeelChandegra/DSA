/*
Problem: stack using queue
Link: https://neetcode.io/problems/implement-stack-using-queues/history
Date: 2026-02-05
*/

#include <queue>
using namespace std;

class MyStack {
private:
    queue<int> q1; // main queue
    queue<int> q2; // helper queue

public:
    MyStack() {}

    
    void push(int x) {

        q2.push(x);

        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }

        swap(q1,q2);

        
    }


    int pop() {
        int x = q1.front();
        q1.pop();
        return x;
        
    }

  
    int top() {
        return q1.front();
     
    }

    bool empty() {
        return q1.empty();
     
    }
};

