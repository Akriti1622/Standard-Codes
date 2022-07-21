//Ceil in BST - Naive Solution

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

Node *getSuccessor(Node *curr){
    curr=curr->right;
    while(curr!=NULL && curr->left!=NULL)
        curr=curr->left;
    return curr;
}


Node *res=NULL;
void ceilNode(Node *root, int x)
{
    if(root==NULL)  return;
    if(root->key==x)
    {
        res=root;
        return;
    }
    if(root->key>x&&(res==NULL||res->key>root->key))
    {
        res=root;
    }
    ceilNode(root->left, x);
    ceilNode(root->right, x);
}

void inorder(Node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);    
    }
} 
int main() {

	Node *root=new Node(10);
	root->left=new Node(5);
	root->right=new Node(15);
	root->right->left=new Node(12);
	root->right->right=new Node(18);
	int x;
	cin>>x;

	ceilNode(root, x);
    if(res!=NULL)
	    cout<<(res->key);
	else
	    cout<<"NULL";
	//inorder(root);
}
