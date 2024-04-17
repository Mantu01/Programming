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
bool isSorted(node* head){
  while(head && head->next){
    if(head->data>head->next->data)
      return false;
    head=head->next;
  }
  return true;
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
  if(isSorted(head))
    cout<<endl<<"Given Linked List is Sorted"<<endl;
  else
    cout<<endl<<"Given Linked List is Unsorted."<<endl;
  return 0;
}