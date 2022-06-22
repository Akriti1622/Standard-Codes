//Reverse a Doubly Linked list

#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *prev;
    node *next;
    node(int x)
    {
        data=x;
        prev=NULL;
        next=NULL;
    }
};
void printList(node *head)
{
    node *curr=head;
    while(curr!=NULL)
    {
        cout<<(curr->data)<<" ";
        curr=curr->next;
    }
    cout<<endl;
}
node *rev(node *head)
{
    
    if(head==NULL)
        return NULL;
    if(head->next==NULL)
        return head;
    node *previous=NULL;
    node *curr=head;
    while(curr!=NULL)
    {
        previous=curr->prev;
        curr->prev=curr->next;
        curr->next=previous;
        curr=curr->prev;
    }
    return previous->prev;
}
int main()
{
    node *head=new node(10);
    node *temp1=new node(20);
    node *temp2=new node(30);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    head=rev(head);
    printList(head);
    return 0;
}
