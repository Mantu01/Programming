// WAP to Check whether a given linked list is Pallindrome or not.
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
void reverse(node* &head){
  if(head==NULL || head->next==NULL)
    return ;
  node* prev=NULL;
  node* next=NULL;
  node* curr=head;
  while(curr){
    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
  }  
  head=prev;
}
node* getMid(node* head){
  node* fast=head;
  while(fast && fast->next){
    head=head->next;
    fast=fast->next->next;
  }
  return head;
}
bool isPallindrome(node* head){
  if(head==NULL || head->next==NULL)
    return true;
  node* mid=getMid(head);
  node* temp=mid;
  mid=mid->next;
  temp->next=NULL;
  reverse(mid);
  while(head && mid){
    if(head->data!=mid->data)
      return false;
    head=head->next;
    mid=mid->next;
  }
  return true;
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
  if(isPallindrome(head))
    cout<<endl<<"Given Linked List is Pallindrome."<<endl;
  else
    cout<<endl<<"Given Linked List is not Pallindrome."<<endl;
  return 0;
}