//Implementation of Queue using Array - Efficient (Circular Array)

#include <bits/stdc++.h> 
using namespace std; 

class Queue { 
public: 
	int front, rear, size; 
	unsigned capacity; 
	int* array; 
}; 
 
Queue* createQueue(unsigned capacity) 
{ 
	Queue* queue = new Queue(); 
	queue->capacity = capacity; 
	queue->front = queue->size = 0; 

	queue->rear = capacity - 1; 
	queue->array = new int[( 
		queue->capacity * sizeof(int))]; 
	return queue; 
} 
 
int isFull(Queue* queue) 
{ 
	return (queue->size == queue->capacity); 
} 

int isEmpty(Queue* queue) 
{ 
	return (queue->size == 0); 
} 

void enqueue(Queue* queue, int item) 
{ 
	if (isFull(queue)) 
		return; 
	queue->rear = (queue->rear + 1) 
				% queue->capacity; 
	queue->array[queue->rear] = item; 
	queue->size = queue->size + 1; 
	cout << item << " enqueued to the queue\n"; 
} 
 
int dequeue(Queue* queue) 
{ 
	if (isEmpty(queue)) 
		return INT_MIN; 
	int item = queue->array[queue->front]; 
	queue->front = (queue->front + 1) 
				% queue->capacity; 
	queue->size = queue->size - 1; 
	return item; 
} 

int front(Queue* queue) 
{ 
	if (isEmpty(queue)) 
		return INT_MIN; 
	return queue->array[queue->front]; 
} 

int rear(Queue* queue) 
{ 
	if (isEmpty(queue)) 
		return INT_MIN; 
	return queue->array[queue->rear]; 
} 

int size(Queue* queue)
{
    return queue->size;
}
 
int main() 
{ 
	Queue* queue = createQueue(1000); 

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);
    enqueue(queue, 50);
    cout<<dequeue(queue)<<" dequeued from the queue"<<endl;
    cout<<dequeue(queue)<<" dequeued from the queue"<<endl;
    cout<<front(queue)<<" is the front of the queue"<<endl;
    cout<<rear(queue)<<" is the rear of the queue"<<endl;
    cout<<size(queue)<<" is the size of the queue"<<endl;
    cout<<"queue is full:- "<<isFull(queue)<<endl;
    cout<<"queue is empty:- "<<isEmpty(queue)<<endl;
    cout<<dequeue(queue)<<" dequeued from the queue"<<endl;
    cout<<dequeue(queue)<<" dequeued from the queue"<<endl;
    cout<<"queue is full:- "<<isFull(queue)<<endl;
    cout<<"queue is empty:- "<<isEmpty(queue)<<endl;
	return 0; 
} 
