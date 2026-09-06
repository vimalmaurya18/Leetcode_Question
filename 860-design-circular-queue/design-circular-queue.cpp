class MyCircularQueue {
public:
    int* arr;
    int rear;
    int front;
    int k;
    int cnt;
    MyCircularQueue(int k) {
        this->k=k;
        arr=new int[k];
        rear=0;
        front=0;
        cnt=0;
    }
    
    bool enQueue(int value) {
        if(cnt==k)
        {
            return false;
        }
        arr[rear]=value;
        rear=(rear+1)%k;
        cnt++;
        return true;
    }
    
    bool deQueue() {
        if(cnt==0)
        {
            return false;
        }
       arr[front%k]=-1;
       front=(front+1)%k;
       cnt--;
       return true;
    }
    
    int Front() {
        if(cnt==0)
        {
            return -1;
        }
        return arr[front];
    }
    
    int Rear() {
        if(cnt==0)
        {
            return -1;
        }
        return arr[(rear-1+k)%k];
    }
    
    bool isEmpty() {
        if(cnt==0)
        return true;
        else return false;
    }
    
    bool isFull() {
        if(cnt==k)
        {
            return true;
        }
        else return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */