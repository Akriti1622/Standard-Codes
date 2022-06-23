//circular linked list Traversal in C++

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
//STANDARD METHOD
void printList(node *head)
{
    if(head==NULL)
        return;
        
    node *p=head;
    do{
        cout<<(p->data)<<" ";
        p=p->next;
    }while(p!=head);
}
/*
void printList(node *head)
{
    if(head==NULL)
        return;
        
    cout<<(head->data)<<" ";
    for(node *p=head->next;p!=head;p=p->next)
        cout<<(p->data)<<" ";
}
*/
int main()
{
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    head->next->next->next->next=head;
    
    printList(head);
    return 0;
}
