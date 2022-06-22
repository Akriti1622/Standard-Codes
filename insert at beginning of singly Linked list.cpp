//insert at beginning of singly Linked list

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
node *insertBegin(node *head, int x)
{
    node *temp=new node(x);
    temp->next=head;
    return temp;
}
int main()
{
   node *head=NULL;
   head=insertBegin(head, 30);
   head=insertBegin(head, 20);
   head=insertBegin(head, 10);
   printList(head);
   return 0;
}
