//Construct Binary Tree from Inorder and Preorder- efficient solution

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

void inorder(Node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);    
    }
}  

int preIndex=0;
Node *tree(unordered_map<int, int> mp,int pre[],int is,int ie){
    if(is>ie)return NULL;
    Node *root=new Node(pre[preIndex++]);
    
    int inIndex;
    if(mp.find(root->key)!=mp.end())
        inIndex=mp[(root->key)];
    
    root->left=tree(mp, pre, is, inIndex-1);
    root->right=tree(mp, pre, inIndex+1, ie);
    return root;
}
Node *cTree(int in[], int pre[],int is,int ie)
{
    unordered_map<int, int> mp;
    for(int i=0;i<=ie;i++)
    {
        mp[in[i]]=i;
    }
    Node *res=tree(mp, pre, is, ie);
    return res;
}
int main() {
	
	int in[]={20,10,40,30,50};
	int pre[]={10,20,30,40,50};
	int n=sizeof(in)/sizeof(in[0]);
	Node *root=cTree(in, pre, 0, n-1);
	inorder(root);
}
