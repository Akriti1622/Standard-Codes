//Delete last node in singly Linked list

#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int x)
    {
        data=x;
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
node *delTail(node *head)
{
    if(head==NULL)
        return NULL;
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    node *curr=head;
    while(curr->next->next!=NULL)
    {
        curr=curr->next;
    }
    delete (curr->next);
    curr->next=NULL;
    return head;
}
int main()
{
   node *head=new node(10);
   head->next=new node(20);
   head->next->next=new node(30);
   cout<<"Before deleting tail node:- "<<endl;
   printList(head);
   head=delTail(head);
   cout<<"After deleting tail node:- "<<endl;
   printList(head);
   return 0;
}
