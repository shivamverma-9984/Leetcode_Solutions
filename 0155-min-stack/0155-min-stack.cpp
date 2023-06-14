class MinStack {
private:
    stack<int> min_st,st;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
            min_st.push(val);
        }
        else if(val<=min_st.top()){
            min_st.push(val);
        }
        st.push(val);
    }
    
    void pop() {
        auto temp=st.top();
        st.pop();
        if(temp==min_st.top()){
            min_st.pop();
        }
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return min_st.top();
    }
};