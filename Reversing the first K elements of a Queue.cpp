//Reversing the first K elements of a Queue

#include <bits/stdc++.h> 
#include <queue>
using namespace std; 


void Print(queue<int> q) 
{ 
	while (!q.empty()) { 
		cout << q.front() << " "; 
		q.pop(); 
	} 
	cout<<endl;
} 


void reverse(queue<int>& q, int k) 
{ 
	if(q.empty()||k>q.size()||k<=0)
	   return;
	 
	 stack<int> s;
	 int i=0;
	 while(i<k)
	 {
	     s.push(q.front());
	     q.pop();
	     i++;
	 }
	 
	 while(!s.empty())
	 {
	     q.push(s.top());
	     s.pop();
	 }
	 
	 //last elements after first k elements
	 int last=q.size()-k;
	 int j=0;
	 while(j<last)
	 {
	     q.push(q.front());
	     q.pop();
	     j++;
	 }
} 

 
int main() 
{
    int k;
    cin>>k;
	queue<int> q; 
	q.push(1); 
	q.push(2); 
	q.push(3); 
	q.push(4); 
	q.push(5); 
	q.push(6); 
	q.push(7); 
	q.push(8);
	q.push(9);
	q.push(10); 
	
	cout<<"Printing the queue before reversing first k elements of the queue"<<endl;
    Print(q);

	reverse(q, k); 
	cout<<"Printing the queue after reversing first k elements of the queue"<<endl;
    Print(q);
    return 0; 
} 
