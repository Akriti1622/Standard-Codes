//search in singly Linked list - recursive soltion

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
int rSearchLL(node *head, int key)
{
    if(head==NULL)
        return -1;
    if(head->data==key)
        return 1;
    else
    {
        int res=rSearchLL(head->next, key);
        if(res==-1) return -1;
        else return (res+1);
    }
    
}
int main()
{
    
    node *head=new node(10);
    head->next=new node(5);
    head->next->next=new node(20);
    head->next->next->next=new node(15);
    int key;
    cin>>key;
    //int pos=1;
    cout<<rSearchLL(head, key);
}
