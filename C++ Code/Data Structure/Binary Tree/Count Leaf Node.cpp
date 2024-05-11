//WAP to count the number of leaf nodes in a binary tree
#include<iostream>
using namespace std;
class node{
  public:
    int data;
    node* left;
    node* right;
    
  node(int d){
    this->data=d;
    this->left=NULL;
    this->right=NULL;
  }
};
node* buldTree(node* root){
  int data;
  cout<<"Enter data : ";
  cin>>data;
  if(data==-1)
    return NULL;
  root=new node(data);
  cout<<"For left of "<<data<<" ,";
  root->left=buldTree(root->left);
  cout<<"For right of "<<data<<" ,";
  root->right=buldTree(root->right);
  return root;
}
void count(node* root, int &ans){
  if(!root)
    return ;
  if(!root->left && !root->right)
    ans++;
  count(root->left,ans);
  count(root->right,ans);
}
int countLeaf(node* root){
  int ans=0;
  count(root,ans);
  return ans;
}
int main(){
  node* root=NULL;
  cout<<"NOTE : Press -1 for NULL element (or for NULL pointer)\n\n";
  root=buldTree(root);
  int n=countLeaf(root);
  cout<<"Number of leaf nodes : "<<n;
  return 0;
}