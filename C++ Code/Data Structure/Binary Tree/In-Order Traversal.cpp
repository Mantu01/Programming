// WAP to build a binary tree and print data in In-Order Traversal using recursion.
#include<iostream>
#include<vector>
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
node* build(node* root){
  int data;
  cout<<"Enter Data : ";
  cin>>data;
  if(data==-1)
    return root;
  root=new node(data);
  cout<<"For left of "<<data<<" , ";
  root->left=build(root->left);
  cout<<"For right of "<<data<<" , ";
  root->right=build(root->right);
  return root; 
}
void IOT(vector<int> &arr, node* root){
  if(!root)
    return ;
  IOT(arr,root->left);  
  arr.push_back(root->data);
  IOT(arr,root->right);
}
int main(){
  cout<<"NOTE : Press -1 for leaf node.\n\n";
  node* root=NULL;
  root=build(root);
  vector<int>arr;
  IOT(arr,root);
  cout<<"\n\nIn-Order Traversal ;\n";
  for(int i:arr)
    cout<<i<<" ";
  return 0;
}