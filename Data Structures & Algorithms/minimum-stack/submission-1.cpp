#include<bits/stdc++.h>

class MinStack {
public:
    MinStack() {
        stack<int> stack;
        stack<int> minStack;
    }
    
    void push(int val) {
        stack.push(val);
        val = min(val, minStack.top() if !minStack.empty() else val);
        minStack.push(val);
    }
    
    void pop() {
        stack.pop();
        minStack.pop();
    }
    
    int top() {
        return stack.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};
