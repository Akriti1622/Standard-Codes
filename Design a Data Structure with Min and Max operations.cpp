//Design a Data Structure with Min and Max operations

//

#include<bits/stdc++.h>
using namespace std;
struct MyDS{
    deque<int> dq;
    void insertMin(int x)
    {
        dq.push_front(x);
    }
    void insertMax(int x)
    {
        dq.push_back(x);
    }
    int getMin()
    {
        return dq.front();
    }
    int getMax()
    {
        return dq.back();
    }
    int extractMin()
    {
        int x=dq.front();
        dq.pop_front();
        return x;
    }
    int extractMax()
    {
        int x=dq.back();
        dq.pop_back();
        return x;
    }
};
int main()
{
    struct MyDS m;
    m.insertMin(5);
    m.insertMax(10);
    m.insertMin(3);
    m.insertMax(15);
    m.insertMin(2);
    cout<<m.getMin()<<endl;
    cout<<m.getMax()<<endl;
    m.insertMin(1);
    cout<<m.getMin()<<endl;
    m.insertMax(20);
    cout<<m.extractMax()<<endl;
    cout<<m.extractMin()<<endl;
    cout<<m.getMax()<<endl;
    return 0;
}
