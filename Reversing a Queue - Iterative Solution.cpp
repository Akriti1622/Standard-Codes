//Reversing a Queue - Iterative Solution

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

void reverseQueue(queue<int>& q) 
{ 
	stack<int> s; 
	while (!q.empty()) { 
		s.push(q.front()); 
		q.pop(); 
	} 
	while (!s.empty()) { 
		q.push(s.top()); 
		s.pop(); 
	} 
} 
 
int main() 
{ 
	queue<int> q; 
	q.push(12); 
	q.push(5); 
	q.push(15);
	q.push(20);
	
	cout<<"Printing the queue before reversing"<<endl;
    Print(q);
    
	reverseQueue(q); 
	cout<<"Printing the queue after reversing"<<endl;
    Print(q);
    return 0; 
} 
