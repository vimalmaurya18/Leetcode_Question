class MyCircularDeque {
public:
int* arr;
int front;
int rear;
int k;//size of the array that we are using
    MyCircularDeque(int k) {
        this->k=k;
        arr=new int[k];
        front=-1;
        rear=-1;
    }
    
    bool insertFront(int value) {
         if((front==0 && rear==k-1) || (rear==(front-1+k)%k))
         {
            return false;
         }
         if(front==-1)
         {
            front=0;
            rear=0;
            arr[front]=value;
         }
         else if(front==0)
         {
            front=k-1;
            arr[front]=value;
         }
         else
         {
            front=front-1;
            arr[front]=value;
         }
         return true;
    }
    
    bool insertLast(int value) {
        if((front==0 && rear==k-1) || (rear==(front-1+k)%k))
        {
            return false;
        }
        if(front==-1)
        {
            front=0;
            rear=0;
            arr[rear]=value;
        }
        else if(rear==k-1)
        {
            rear=0;
            arr[rear]=value;
        }
        else
        {
            rear=rear+1;
            arr[rear]=value;
        }
        return true;
    }
    
    bool deleteFront() {
        if(front==-1)
        {
            return false;
        }
        if(rear==front)
        {
            arr[front]=-1;
            front=-1;
            rear=-1;
        }
        else if(front==k-1)
        {
            arr[front]=-1;
            front=0;
        }
        else
        {
            arr[front]=-1;
            front++;
        }
        return true;
    }
    
    bool deleteLast() {
        if(front==-1)
        {
            return false;
        }
        if(rear==front)
        {
            arr[rear]=-1;
            front=-1;
            rear=-1;
        }
        else if(rear==0)
        {
            arr[rear]=-1;
            rear=k-1;
        }
        else
        {
            arr[rear]=-1;
            rear--;
        }
        return true;
    }
    
    int getFront() {
        if(front==-1)
        {
            return -1;
        }
        return arr[front];
    }
    
    int getRear() {
        if(front==-1)
        {
            return -1;
        }
        return arr[rear];
    }
    
    bool isEmpty() {
        if(front==-1)
        {
            return true;
        }
        return false;
    }
    
    bool isFull() {
        if((rear==k-1 && front==0) || (rear==(front-1+k)%k))
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