class MinStack {
public:
    stack<int>s,M;
    MinStack() {
        
    }
    
    void push(int val) {
    if(!s.empty()){ s.push(val);M.push(min(M.top(),val));}
    else {s.push(val);M.push(min(s.top(),val));}
      
    }
    
    void pop() {
      if(!s.empty()) { s.pop();M.pop();}
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return M.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */