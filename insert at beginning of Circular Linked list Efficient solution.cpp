//insert at beginning of Circular Linked list Efficient solution

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
    cout<<endl;
}

node *insertBegin(node *head, int x)
{
    node *temp=new node(x);
    if(head==NULL)
    {
        temp->next=temp;
        return temp;
    }
    else
    {
        temp->next=head->next;
        head->next=temp;
        int t=head->data;
        head->data=temp->data;
        temp->data=t;
        return head;
    }
}
int main()
{
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    head->next->next->next->next=head;
    
    printList(head);
    int x;
    cin>>x;
    head=insertBegin(head, x);
    printList(head);
    return 0;
}
