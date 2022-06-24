//Intersection of two linked list- Naive solution

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
int getIntersection(node* h1, node *h2)
{
    node *c1=h1, *c2=h2;
    while(c1!=c2)
    {
        while(c2->next!=NULL&&c2->next!=c1)
        {
            c2=c2->next;
        }
        if(c2->next==c1)
            return (c2->next->data);
        c1=c1->next;
        c2=h2;
    }
    return (c1->data);
}
int main()
{
   // node *head=NULL;
   node *h1=new node(10);
   h1->next=new node(20);
   h1->next->next=new node(30);
   h1->next->next->next=new node(40);
   h1->next->next->next->next=new node(50);
   //head->next->next->next->next->next=head->next->next;
   //printList(head);
   node *h2=new node(9);
   h2->next=h1->next->next->next->next;
   cout<<getIntersection(h1, h2);
   //printList(head);
   return 0;
}
