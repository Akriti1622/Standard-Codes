//Array Implementation of Deque - Efficient Implementation

#include<bits/stdc++.h>
using namespace std;
struct Deque{
    int size, cap, front;
    int *arr;
    Deque(int c)
    {
        cap=c;
        size=front=0;
        arr=new int[cap];
    }
    bool isEmpty() { return (size==0); }
    bool isFull() { return (size==cap); }
    void insertRear(int x)
    {
        if(isFull())    return;
        int new_rear=(front+size)%cap;
        arr[new_rear]=x;
        size++;
    }
    void deleteRear()
    {
        if(isEmpty())   return;
        size--;
    }
    int getRear()
    {
        if(isEmpty())   return INT_MIN;
        return (front+size-1)%cap;
    }
    void insertFront(int x)
    {
        if(isFull())    return;
        front=(front+cap-1)%cap;
        arr[front]=x;
        size++;
    }
    void deleteFront()
    {
        if(isEmpty())   return;
        front=(front+1)%cap;
        size--;
    }
    int getFront()
    {
        if(isEmpty())   return INT_MIN;
        return front;
    }
    int getSize()
    {
        return size;
    }
};
int main()
{
    int c;
    cin>>c;
    Deque dq(c);
    dq.insertRear(1);
    dq.insertFront(2);
    dq.insertRear(30);
    dq.insertFront(50);
    dq.deleteFront();
    cout<<dq.getFront()<<" "<<dq.getRear()<<endl;
    dq.insertRear(3);
    cout<<dq.getFront()<<" "<<dq.getRear()<<endl;
    dq.insertRear(4);
    cout<<dq.getSize()<<endl;
    cout<<dq.isFull()<<endl;
    dq.insertFront(5);
    cout<<dq.isEmpty()<<endl;
    cout<<dq.getFront()<<" "<<dq.getRear()<<endl;
    dq.insertRear(6);
    cout<<dq.isFull()<<endl;
    cout<<dq.getSize()<<endl;
    dq.deleteFront();
    cout<<dq.getFront()<<" "<<dq.getRear()<<endl;
    dq.deleteRear();
    cout<<dq.getSize()<<endl;
    cout<<dq.getFront()<<" "<<dq.getRear()<<endl;
    cout<<dq.isEmpty()<<endl;
    cout<<dq.isFull()<<endl;
    
}
