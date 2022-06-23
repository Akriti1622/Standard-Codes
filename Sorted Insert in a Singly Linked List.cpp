//Sorted Insert in a Singly Linked List

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
node *sortedinsert(node *head, int x)
{
    node *temp=new node(x);
    if(head==NULL)
        return temp;
    if(head->data>x)
    {
        temp->next=head;
        return temp;
    }
    node *curr=head;
    while((curr->next!=NULL)&&(curr->next->data<x))
        curr=curr->next;
    temp->next=curr->next;
    curr->next=temp;
    return head;
}
int main()
{
   node *head=new node(10);
   head->next=new node(20);
   head->next->next=new node(30);
   int x;
   cin>>x;
   cout<<"Before inserting an element in a sorted singly linked list:- "<<endl;
   printList(head);
   head=sortedinsert(head, x);
   cout<<"After inserting an element in a sorted singly linked list:- "<<endl;
   printList(head);
   return 0;
}
