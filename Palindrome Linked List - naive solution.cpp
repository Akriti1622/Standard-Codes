//Palindrome Linked List - naive solution

#include<bits/stdc++.h>
using namespace std;
struct node
{
    char data;
    node *next;
    node(char x)
    {
        data=x;
        next=NULL;
    }
};
bool isPal(node *head)
{
    vector<char> v;
    int count=0;
    for(node *curr=head;curr!=NULL;curr=curr->next)
    {
        v.push_back(curr->data);
        count++;
    }
    int i=count-1;
    for(node *curr=head;curr!=NULL;curr=curr->next)
    {
        if(v[i]!=curr->data)
            return false;
        v.pop_back();
        i--;
    }
    return true;
}
int main()
{
    //node *h1=NULL;
   node *h1=new node('R');
   h1->next=new node('A');
   h1->next->next=new node('D');
   h1->next->next->next=new node('A');
   h1->next->next->next->next=new node('R');
   cout<<isPal(h1);
   return 0;
}
