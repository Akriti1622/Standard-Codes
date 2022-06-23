//Middle of linked list - Efficient Code

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
void middle(node *head)
{
    if(head==NULL)
        return;
    node *s=head;   //s for slow
    node *f=head;   //f for fast
    while(f!=NULL&&f->next!=NULL)
    {
        s=s->next;
        f=f->next->next;
    }
    cout<<(s->data);
    
}
int main()
{
   node *head=new node(10);
   head->next=new node(20);
   head->next->next=new node(30);
   head->next->next->next=new node(40);
   head->next->next->next->next=new node(50);
   middle(head);
   return 0;
}
