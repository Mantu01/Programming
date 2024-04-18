// WAP to merge two sorted linked list to obtain a sorted LL.
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
node* merge(node* h1, node* h2){
  if(h1==NULL)
    return h2;
  if(h2==NULL)
    return h1;
  node* ans=NULL;
  if(h1->data<=h2->data){
    ans=h1;
    h1=h1->next;
  }
  else{
    ans=h2;
    h2=h2->next;
  }
  node* curr=ans;
  while(h1!=NULL && h2!=NULL){
    if(h1->data<=h2->data){
      curr->next=h1;
      h1=h1->next;
    }
    else{
      curr->next=h2;
      h2=h2->next;
    }
    curr=curr->next;
  }
  if(h1!=NULL)
    curr->next=h1;
  if(h2!=NULL)
    curr->next=h2;
  return ans;
}
int main(){
  int data;
  cout<<"Press -1 to stop inserting elements.\n";
  cout<<"Enter data of first LL :\n";
  cin>>data;
  node* head1=NULL;
  node* tail1=NULL;
  while(data!=-1){
    insert(data,head1,tail1);
    cin>>data;
  }
  cout<<"Enter data of second LL :\n";
  cin>>data;
  node* head2=NULL;
  node* tail2=NULL;
  while(data!=-1){
    insert(data,head2,tail2);
    cin>>data;
  }
  cout<<endl<<"First Linked List :";
  print(head1);
  cout<<endl<<"Second Linked List :";
  print(head2);
  node* head=merge(head1,head2);
  cout<<endl<<"Merge Linked List :";
  print(head);
  return 0;
}