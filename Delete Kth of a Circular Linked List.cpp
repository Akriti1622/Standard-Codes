//Delete Kth of a Circular Linked List

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
node *delKth(node *head, int k)
{
    if(head==NULL)
        return head;
    if(k==1)
        return delHead(head);
    /*
    //if its given that k<=number of nodes
    node *curr=head;
    for(int i=0;i<k-2;i++)
        curr=curr->next;
    node *temp=curr->next;
    curr->next=curr->next->next;
    delete temp;
    return head;
    */
    node *curr=head;
    int i=0;
    for(i=0;i<k-2&&curr->next!=head;i++)
        curr=curr->next;
    if(curr->next==head)
        return head;
    node *temp=curr->next;
    curr->next=curr->next->next;
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
    int k;
    cin>>k;
    cout<<"Before deleting the element at position "<<k<<":-"<<endl;
    printList(head);
    head=delKth(head, k);
    cout<<"After deleting the element at position "<<k<<":-"<<endl;
    printList(head);
    return 0;
}
