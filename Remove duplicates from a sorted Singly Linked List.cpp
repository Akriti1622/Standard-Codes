//Remove duplicates from a sorted Singly Linked List

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
void removeDuplicates(node *head)
{
    node *curr=head;
    while(curr!=NULL&&curr->next!=NULL)
    {
        if(curr->data==curr->next->data)
        {
            node *t=curr->next;
            curr->next=curr->next->next;
            delete(t);
        }
        else
            curr=curr->next;
    }
}
int main()
{
   node *head=new node(10);
   head->next=new node(20);
   head->next->next=new node(20);
   head->next->next->next=new node(30);
   head->next->next->next->next=new node(30);
   removeDuplicates(head);
   printList(head);
   return 0;
}
