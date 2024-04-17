// WAP to reverse elements of a singly linked list.
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
node* rev(node* curr, node* prev){
  if(curr==NULL)
    return prev;
  node* next=curr->next;
  curr->next=prev;
  return rev(next,curr);
}
void reverse(node* &head){
  if(head==NULL || head->next==NULL)
    return ;
  node* curr=head;
  node* prev=NULL;
  head=rev(head,prev);
}
int main(){
  int data;
  cout<<"Enter the data (Press -1 to stop insertion) :"<<endl;
  cin>>data;
  node* head=NULL;
  node* tail=NULL;
  while(data!=-1){
    insert(data,head,tail);
    cin>>data;
  }
  cout<<endl<<"Given Linked List :";
  print(head);
  cout<<endl<<"Reversed Linked Listt :";
  reverse(head);
  print(head);
  return 0;
}