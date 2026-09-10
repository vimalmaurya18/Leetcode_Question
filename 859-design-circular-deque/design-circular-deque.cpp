class MyCircularDeque {
public:
    int front;
    int rear;
    int* arr;
    int cnt;
    int k;
    MyCircularDeque(int k) {
        this->k=k;
        rear=0;
        front=k-1;
        arr=new int[k];
        cnt=0;
    }
    
    bool insertFront(int value) {
        if(cnt==k)
        {
            return false;
        }
        arr[front]=value;
        front=(front-1+k)%k;
        cnt++;
        return true;
    }
    
    bool insertLast(int value) {
        if(cnt==k)
        {
            return false;
        }
        arr[rear]=value;
        rear=(rear+1)%k;
        cnt++;
        return  true;
    }
    
    bool deleteFront() {
        if(cnt==0)
        {
            return false;
        }
        arr[(front+1)%k]=-1;
        front=(front+1)%k;
        cnt--;
        return true;
    }
    
    bool deleteLast() {
        if(cnt==0)
        {
            return false;
        }
        arr[(rear-1+k)%k]=-1;
        rear=(rear-1+k)%k;
        cnt--;
        return true;
    }
    
    int getFront() {
        if(cnt==0)
        {
            return -1;
        }
        return arr[(front+1)%k];
    }
    
    int getRear() {
        if(cnt==0)
        {
            return -1;
        }
        return arr[(rear-1+k)%k];
    }
    
    bool isEmpty() {
        if(cnt==0)
        {
            return true;
        }
        return false;
    }
    
    bool isFull() {
        if(cnt==k)
        {
            return true;
        }
        return false;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */