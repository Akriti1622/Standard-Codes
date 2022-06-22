//insert at given position in singly Linked list.cpp

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
node *insertPos(node  *head, int pos , int data)
{
    node *temp=new node(data);
    if(pos==1)
    {
        temp->next=head;
        return temp;
    }
    node *curr=head;
    /*
    while((curr->next!=NULL)&&(pos>2))
    {
        curr=curr->next;
        pos--;
    }
    if(pos==2)
    {
        temp->next=curr->next;
        curr->next=temp;
    }
    return head;
    */
    for(int i=1;i<=pos-2&&curr!=NULL;i++)
        curr=curr->next;
        
    if(curr==NULL)
        return head;
    temp->next=curr->next;
    curr->next=temp;
    return head;
}
int main()
{
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    int pos, data;
    cin>>pos>>data;
    cout<<"Before inserting "<<data<<" at pos "<<pos<<":-"<<endl;
    printList(head);
    head=insertPos(head, pos, data);
    cout<<"After inserting "<<data<<" at pos "<<pos<<":-"<<endl;
    printList(head);
}
