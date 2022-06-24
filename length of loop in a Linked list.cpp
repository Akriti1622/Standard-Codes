//length of loop in a Linked list

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
int countNodes(struct Node *n) 
{ 
    int res = 1; 
    struct Node *temp = n; 
    while (temp->next != n) 
    { 
        res++; 
        temp = temp->next; 
    } 
    return res; 
} 
int countNodesinLoop(Node* head) 
{ 
    
    if(head==NULL)
        return 0;
    Node *slow_p = head, *fast_p = head; 
    while (fast_p!=NULL && fast_p->next!=NULL) { 
        slow_p = slow_p->next; 
        fast_p = fast_p->next->next; 
        if (slow_p == fast_p) { 
            return countNodes(slow_p); 
        } 
    }
    return 0;
}

int main() 
{ 
    //Node *head=NULL;
	Node *head=new Node(15);
	head->next=new Node(10);
	head->next->next=new Node(12);
	head->next->next->next=new Node(20);
	head->next->next->next->next=head;
	cout<<countNodesinLoop(head);
    //printList(head);
	return 0;
} 
