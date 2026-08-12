class MinStack {
public:
    int *arr;
    int Top;
    int size;
    int *minarr;
    MinStack() {
        size=100000;
        arr=new int[size];
        minarr=new int[size];
        Top=-1;
    }
    
    void push(int value) {
        Top++;
        if(Top==0)
        {
            minarr[Top]=value;
        }
        else
       minarr[Top]=min(value,minarr[Top-1]);
        arr[Top]=value;

         return;
    }
    
    void pop() {
        Top--;
    }
    
    int top() {
        if(Top==-1)
        return 0;
        return arr[Top];
    }
    
    int getMin() {
        return minarr[Top];
        // int chota=arr[Top];
        // int p=Top;
        // while(p!=-1)
        // {
        //     chota=min(chota,arr[p]);
        //     p--;
        // }
        // return chota;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->Top();
 * int param_4 = obj->getMin();
 */