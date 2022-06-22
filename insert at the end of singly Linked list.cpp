//insert at the end of singly Linked list

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
}
node *insertEnd(node *head, int x)
{
    node *temp=new node(x);
    if(head==NULL)
        return temp;
    node *curr=head;
    while(curr->next!=NULL)
        curr=curr->next;
    curr->next=temp;
    return head;
}
int main()
{
   node *head=NULL;
   head=insertEnd(head, 10);
   head=insertEnd(head, 20);
   head=insertEnd(head, 30);
   printList(head);
   return 0;
}
