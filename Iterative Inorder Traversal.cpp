//Iterative Inorder Traversal

#include <bits/stdc++.h>
using namespace std;

struct Node  
{ 
  int key; 
  struct Node *left; 
  struct Node *right; 
  Node(int k){
      key=k;
      left=right=NULL;
  }
};

void iterativeInorder(Node *root){
   stack<Node *> s;
   Node *curr=root;
   while(curr!=NULL||s.empty()==false)
   {
       while(curr!=NULL)
       {
           s.push(curr);
           curr=curr->left;
       }
       curr=s.top();
       s.pop();
       cout<<(curr->key)<<" ";
       curr=curr->right;
   }
}  

int main() {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
	iterativeInorder(root);
}
