//Detect loop - method 1(naive)

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
bool detectLoop(node *head)
{
    if(head==NULL)
        return false;
    node *curr=head;
    while(curr!=NULL)
    {
        if(curr->next==NULL)
            return false;
        if(curr->next==head)
            return true;
        node *temp=curr->next, *curr1=head;
        while(curr1!=curr)
        {
            if(curr1->next==temp)
                return true;
            curr1=curr1->next;
        }
        curr=curr->next;
    }
    return false;
}
int main()
{
    //node *head=NULL;
   node *head=new node(10);
   head->next=new node(20);
   head->next->next=new node(30);
   head->next->next->next=new node(40);
   head->next->next->next->next=new node(50);
   head->next->next->next->next->next=head->next;
   cout<<detectLoop(head);
   return 0;
}
