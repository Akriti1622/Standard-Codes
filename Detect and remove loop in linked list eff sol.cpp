//Detect and remove loop in linked list eff sol

#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
void printList(Node *head)
{
    Node *curr=head;
    while(curr!=NULL)
    {
        cout<<(curr->data)<<" ";
        curr=curr->next;
    }
    cout<<endl;
}
void Detect_Remove(Node* head) 
{ 
    if(head==NULL)
        return;
    Node *slow_p = head, *fast_p = head; 
    while (fast_p!=NULL && fast_p->next!=NULL) { 
        slow_p = slow_p->next; 
        fast_p = fast_p->next->next; 
        if (slow_p == fast_p) { 
            break; 
        } 
    }
    if(slow_p!=fast_p)
        return;
    slow_p=head;
    if(slow_p==fast_p)
    {
        while(slow_p->next!=head)
        {
            slow_p=slow_p->next;
        }
        slow_p->next=NULL;
        return;
    }
    while(slow_p->next!=fast_p->next)
    {
        slow_p=slow_p->next;
        fast_p=fast_p->next;
    }
    fast_p->next=NULL;
}

int main() 
{ 
    //Node *head=NULL;
	Node *head=new Node(15);
	head->next=new Node(10);
	head->next->next=new Node(12);
	head->next->next->next=new Node(20);
	head->next->next->next->next=head->next->next->next;
	//printList(head);
	Detect_Remove(head);
    printList(head);
	return 0;
} 
