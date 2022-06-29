//Implementation of Queue using Linked List

#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int d)
    {
        data=d;
        next=NULL;
    }
};
struct Queue
{
    node *front, *rear;
    int size;
    Queue()
    {
        front=rear=NULL;
        size=0;
    }
    bool isEmpty()
    {
        return (size==0);
    }
    void enqueue(int x)
    {
        node *temp=new node(x);
        if (rear == NULL) { 
			front = rear = temp;
			size++;
			return;
        }
        rear->next=temp;
        rear=temp;
        size++;
    }
    int dequeue()
    {
        if(front==NULL)
            return INT_MIN;
        int item=front->data;
        node *temp=front;
        front=front->next;
		if (front == NULL) 
			rear = NULL; 
		size--;
        delete temp;
        return item;
    }
    int getSize()
    {
        return size;
    }
    int getFront()
    {
        if(front==NULL)
            return INT_MIN;
        return (front->data);
    }
    int getRear()
    {
        if(front==NULL)
            return INT_MIN;
        return (rear->data);
    }
};
int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.getFront()<<endl;
    cout<<q.getRear()<<endl;
    cout<<q.getSize()<<endl;
    cout<<q.isEmpty()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.isEmpty()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.isEmpty()<<endl;
    return 0;
}
