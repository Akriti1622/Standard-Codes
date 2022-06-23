//Nth Node from end of linked list
//Method 1(Using length of Linked List)

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
void printNthFromEnd(node *head, int n)
{
    int count=0;
    for(node *curr=head;curr!=NULL;curr=curr->next)
        count++;
    if(count<n)
        return;
    node *curr=head;
    for(int i=0;i<count-n;i++)
        curr=curr->next;
    cout<<(curr->data);
}
int main()
{
   node *head=new node(10);
   head->next=new node(20);
   head->next->next=new node(30);
   head->next->next->next=new node(40);
   head->next->next->next->next=new node(50);
   int n;
   cin>>n;
   printNthFromEnd(head, n);
   return 0;
}
