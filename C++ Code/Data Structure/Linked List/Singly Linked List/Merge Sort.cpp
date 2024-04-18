#include<iostream>
using namespace std;
class node{
  public:
    int data;
    node* next;
  node(int d){
    this->data=d;
    this->next=NULL;
  }
};
void print(node* head){
  if(!head)
    return ;
  cout<<endl;
  while(head){
    cout<<head->data<<" ";
    head=head->next;
  }
  cout<<endl;
}
void insert(int data, node* &head, node* &tail){
  node* temp=new node(data);
  if(head==NULL){
    head=temp;
    tail =temp;
    return ;
  }
  tail->next=temp;
  tail=temp;
}
node* getMid(node* head){
  node* fast=head->next;
  while(fast && fast->next){
    head=head->next;
    fast=fast->next->next;
  }
  return head;
}
node* merge(node* h1, node* h2){
  if(!h1)
    return h2;
  if(!h2)
    return h1;
  node* ans=NULL;
  if(h1->data<=h2->data){
    ans=h1;
    ans->next=merge(h1->next,h2);
  }
  else{
    ans=h2;
    ans->next=merge(h1,h2->next);
  }
  return ans;
}
void mergeSort(node* &head){
  if(head==NULL || head->next==NULL)
    return ;
  node* h1=head;
  node* h2=getMid(head);
  node* temp=h2;
  h2=h2->next;
  temp->next=NULL;
  mergeSort(h1);
  mergeSort(h2);
  head=merge(h1,h2);
}
int main(){
  int data;
  cout<<"Press -1 to stop inserting elements.\n";
  cout<<"Enter data of LL :\n";
  cin>>data;
  node* head=NULL;
  node* tail=NULL;
  while(data!=-1){
    insert(data,head,tail);
    cin>>data;
  }
  cout<<endl<<"Given Linked List :";
  print(head);
  mergeSort(head);
  cout<<endl<<"Sorted LL :";
  print(head);
  return 0;
}