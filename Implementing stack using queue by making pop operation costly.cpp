//Implementing stack using queue by making pop operation costly

/* Program to implement a stack using 
two queue */
#include <bits/stdc++.h> 

using namespace std; 

struct  Stack { 

	queue<int> q1, q2; 
	int curr_size; 

public: 
	Stack() 
	{ 
		curr_size = 0; 
	} 

	void push(int x) 
	{ 
		curr_size++; 

		// Push x first at the end of the queue as usual
		q1.push(x); 
	
	} 

	void pop() 
	{ 

		// if no elements are there in q1 
		if (q1.empty()) 
			return; 
		int temp=curr_size;
		
		// Push all the remaining 
		// elements in q1 to q2. 
		
		while (curr_size>1) { 
			q2.push(q1.front()); 
			q1.pop(); 
			curr_size--; 
		} 
		//poping the last element which entered last in the queue
		q1.pop(); 
		// swap the names of two queues 
		queue<int> q = q1; 
		q1 = q2; 
		q2 = q; 
	    //maintaing the curr_size again and reducing its size by one since 1 element is popped
		curr_size=temp-1; 
	} 

	int top() 
	{ 
	    // We would not put -1 here because stack elements can be negative
		if (q1.empty()) 
			return INT_MIN; 
		//since new member is entered at the end, we would return last element
		return q1.back(); 
	} 

	int size() 
	{ 
		return curr_size; 
	} 
}; 
 
int main() 
{ 
	Stack s; 
	s.push(10); 
	s.push(5); 
	s.push(15); 
	s.push(-1);
	
	cout << "current size: " << s.size() << endl; 
	cout << s.top() << endl; 
	s.pop(); 
	cout << s.top() << endl; 
	s.pop(); 
	cout << s.top() << endl; 

	cout << "current size: " <<  s.size() << endl; 
	return 0; 
} 
