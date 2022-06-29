//Implementation of Queue using Array - naive(linear array)

#include <bits/stdc++.h>
using namespace std;
struct Queue
{
    int cap, size_;
    int *arr;
    Queue(int d)
    {
        cap=d;
        size_=0;
        arr=new int[d];
    }
    bool isFull()
    {
        return (size_==cap);
    }
    bool isEmpty()
    {
        return (size_==0);
    }
    void enqueue(int x)
    {
        if(isFull())    return;
        arr[size_]=x;
        size_++;
    }
    int dequeue()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty"<<endl;
            return INT_MIN;
        }
        int f=arr[0];
        for(int i=0;i<size_-1;i++)
            arr[i]=arr[i+1];
        size_--;
        return f;
    }
    int size()
    {
        return size_;
    }
    int getFront()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty"<<endl;
            return INT_MIN;
        }
        return arr[0];
    }
    int getRear()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty"<<endl;
            return INT_MIN;
        }
        return arr[size_-1];
    }
};
int main() {
    Queue q(5);
    
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    
    cout<<q.getFront()<<endl;
    cout<<q.getRear()<<endl;
    cout<<q.size()<<endl;
    cout<<q.isFull()<<endl;
    cout<<q.isEmpty()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.isFull()<<endl;
    cout<<q.isEmpty()<<endl;
    
    return 0;
}
