//Delete last node in Doubly Linked list

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
    while(curr->next!=NULL)
        curr=curr->next;
        
    curr->prev->next=NULL;
    delete curr;
    return head;
    /*
    //it should also work
    while(curr->next->next!=NULL)
    {
        curr=curr->next;
    }
    delete (curr->next);
    curr->next=NULL;
    return head;
    */
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
    head=delTail(head);
    printList(head);
    return 0;
}
