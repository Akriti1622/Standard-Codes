//Design a Stack with getMin() in O(1) Space - Code(Assuming all Elements Positive)


#include <bits/stdc++.h>
using namespace std;

struct MyStack {
    stack<int> s;
    int min;
 
void push(int x) {
 
      if(s.empty() ) {
         min=x;
         s.push(x);
      }
      else if(x<=min){
          s.push(x-min);
          min=x;
      }else{
      s.push(x);
      }
   }
int pop() {

    int t=s.top();s.pop();
    if(t<=0){
        int res=min;
        min=min-t;
        return res;
    }else{
        return t;
    }
   }

int top() {
    int t=s.top();
    return ((t<=0)? min : t);
   }
 
int getMin() {
      return min;
   }
};
int main()
{
    MyStack s;
    s.push(4);
    s.push(3);
    s.push(5);
    cout<<s.getMin()<<endl;
    s.push(8);
    s.push(2);
    cout<<s.getMin()<<endl;
    s.push(1);
    cout<<s.getMin()<<endl;
    s.pop();
    cout<<s.getMin()<<endl;
    return 0; 
}
