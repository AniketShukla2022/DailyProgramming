class MinStack {
public:
    stack<int> st;
    stack<int> minst;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if (minst.empty())
            minst.push(val);
        else if (val < minst.top())
            minst.push(val);
        else
            minst.push(minst.top()); //line 13-16 -> update minstack with each push and current min will always be pushed
        return;
    }
    
    void pop() {
        if (!st.empty())
            st.pop();
        if (!minst.empty())
            minst.pop();
        return;
    }
    
    int top() {
        if (!st.empty())
            return st.top();
        return 0;
    }
    
    int getMin() {
        return minst.top();
    }
};