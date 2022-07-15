//IMPLEMENT QUEUE USING STACKS -> 11/19/2021 17:20
//https://leetcode.com/problems/implement-queue-using-stacks/submissions/
class MyQueue {
public:
        stack<int> stk1;
        stack<int> stk2; 
    /** Initialize your data structure here. */
    MyQueue() {
        stack<int> stk1;
        stack<int> stk2; 
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        stk1.push(x);
        
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        while(stk1.size()!=1)
        {
            stk2.push(stk1.top());
            stk1.pop();
        }
        int x= stk1.top();
        stk1.pop();
        while(!stk2.empty())
        {
            stk1.push(stk2.top());
            stk2.pop();
        }
        return x;
    }
    
    /** Get the front element. */
    int peek() {
        while(stk1.size()!=1)
        {
            stk2.push(stk1.top());
            stk1.pop();
        }
        int x = stk1.top();
        while(!stk2.empty())
        {
            stk1.push(stk2.top());
            stk2.pop();
        }
        return x;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        if(stk1.empty())
            return true;
        else
            return false;
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
