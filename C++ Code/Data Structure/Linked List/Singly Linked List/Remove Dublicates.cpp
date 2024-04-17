// WAP to remove dublicate of a singly linked list.
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
void removeDublicates(node* &head){
  for(node* i=head;i!=NULL;i=i->next){
    node* prev=i->next;
    for(node* j=i->next;j!=NULL;j=j->next){
      if(i->data==j->data){
        node* temp=j;
        prev->next=j->next;
        temp->next=NULL;
        delete temp;
      }
      prev=j;
    }
  }
}
int main(){
  int data,k;
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
  cout<<endl<<"Linked List after removing dublicates :";
  removeDublicates(head);
  print(head);
  return 0;
}