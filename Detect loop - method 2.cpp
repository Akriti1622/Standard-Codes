//Detect loop - method 2
//If modifications to Linked list structure is allowed
//make a boolean visited in the structure of LL
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
    bool visited;
    node(int x)
    {
        data=x;
        next=NULL;
        visited=false;
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
        if(curr->visited==true)
            return true;
        curr->visited=true;
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
