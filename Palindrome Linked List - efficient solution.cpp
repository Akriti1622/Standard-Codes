//Palindrome Linked List - efficient solution

#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    char data;
    Node* next;
    Node(char x){
        data=x;
        next=NULL;
    }
};
void print(Node *head)
{
    for(Node *curr=head;curr!=NULL;curr=curr->next)
        cout<<(curr->data)<<" ";
    cout<<endl;
}

Node *reverseList(Node *head){
    if(head==NULL||head->next==NULL)return head;
    Node *rest_head=reverseList(head->next);
    Node *rest_tail=head->next;
    rest_tail->next=head;
    head->next=NULL;
    return rest_head;
}

bool isPalindrome(Node *head){
        if(head==NULL)return true;
        Node *slow=head,*fast=head;
        while(fast->next!=NULL&&fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        Node *rev=reverseList(slow->next);
        slow->next=rev; //
        print(head);    //
        Node *curr=head;
        while(rev!=NULL){
            if(rev->data!=curr->data)
            {
                slow->next=reverseList(slow->next); //
                print(head);    //
                return false;
            }
                
            rev=rev->next;
            curr=curr->next;
        }
        slow->next=reverseList(slow->next); //
        print(head);    //
        return true;
    }
int main() 
{ 
	Node *head=new Node('R');
	head->next=new Node('A');
	head->next->next=new Node('D');
	head->next->next->next=new Node('A');
	head->next->next->next->next=new Node('R');
	cout<<isPalindrome(head);
	return 0;
} 
