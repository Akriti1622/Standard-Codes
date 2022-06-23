//Delete Head of Circular Linked List Efficient Code

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
    if(head==NULL)
        return;
    node *p=head;
    do{
        cout<<(p->data)<<" ";
        p=p->next;
    }while(p!=head);
    cout<<endl;
}
node *delHead(node *head)
{
    if(head==NULL)
        return NULL;
    if(head->next==head)
    {
        delete head;
        return NULL;
    }
    head->data=head->next->data;
    node *temp=head->next;
    head->next=head->next->next;
    delete temp;
    return head;
}
int main()
{
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    head->next->next->next->next=head;
    printList(head);
    head=delHead(head);
    printList(head);
    return 0;
}
