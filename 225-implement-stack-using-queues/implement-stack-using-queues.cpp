class MyStack {
public:
 queue<int>q1;
 queue<int>q2;
    MyStack() {
    }
    
    void push(int x) {
        q1.push(x);
        return ;
    }

    int pop() {
        if(q1.size()==0)
        {
            return -1;
        }
        int p;

        if(q1.size()==1)
        {
            p=q1.front();
            q1.pop();
            return p;
        }

       while(!q1.empty())
       {
        int n=q1.front();
        q1.pop();
        if(q1.size()==1)
        {
            p=q1.front();
        }
        q2.push(n);
       }
       while(q2.size()>1)
        {
            int n=q2.front();
            q2.pop();
            q1.push(n);
        }
        q2.pop();
       return p;
    }
    
    int top() {
        if(q1.size()==0)
        {
            return -1;
        }
        int p;

         if(q1.size()==1)
        {
            return q1.front();
        }

        while(!q1.empty())
       {
        int n=q1.front();
        q1.pop();
        if(q1.size()==1)
        {
            p=q1.front();
        }
        q2.push(n);
       }
       while(!q2.empty())
       {
        int n=q2.front();
        q2.pop();
        q1.push(n);
       }
        return p;
    }
    
    bool empty() {
        if(q1.size()==0)
        {
            return true;
        }
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */