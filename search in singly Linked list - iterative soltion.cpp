//search in singly Linked list - iterative soltion

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
int searchLL(node *head, int key)
{
    int res=1;
    node *curr=head;
    while(curr!=NULL)
    {
        if(curr->data==key)
            return res;
        else
        {
            res++;
            curr=curr->next;
        }
    }
    return -1;
}
int main()
{
    
    node *head=new node(10);
    head->next=new node(5);
    head->next->next=new node(20);
    head->next->next->next=new node(15);
    int key;
    cin>>key;
    cout<<searchLL(head, key);
}
