//Array Implementation of Deque - Simple Implementation

#include<bits/stdc++.h>
using namespace std;
struct Deque{
    int size, cap;
    int *arr;
    Deque(int c)
    {
        cap=c;
        size=0;
        arr=new int[cap];
    }
    bool isEmpty() { return (size==0); }
    bool isFull() { return (size==cap); }
    void insertRear(int x)
    {
        if(isFull())    return;
        arr[size]=x;
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
        return (size-1);
    }
    void insertFront(int x)
    {
        if(isFull())    return;
        for(int i=size-1;i>=0;i--)
            arr[i+1]=arr[i];
        arr[0]=x;
        size++;
    }
    void deleteFront()
    {
        if(isEmpty())   return;
        for(int i=0;i<size-1;i++)
            arr[i]=arr[i+1];
        size--;
    }
    int getFront()
    {
        if(isEmpty())   return INT_MIN;
        return 0;
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
    cout<<dq.isEmpty()<<endl;
    dq.insertRear(1);
    cout<<dq.getFront()<<" "<<dq.getRear()<<endl;
    dq.insertRear(2);
    cout<<dq.getFront()<<" "<<dq.getRear()<<endl;
    dq.insertRear(3);
    cout<<dq.getSize()<<endl;
    cout<<dq.isFull()<<endl;
    dq.insertFront(4);
    cout<<dq.isEmpty()<<endl;
    cout<<dq.getFront()<<" "<<dq.getRear()<<endl;
    dq.insertRear(5);
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
